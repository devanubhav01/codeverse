import java.util.Arrays;

public class Day02 {

    public static void main(String[] args) {
        int[] arr = {-1, 2, 2, 4};
        int target = 4;

        Solution sol = new Solution();
        int result = sol.closest3Sum(arr, target);

        System.out.println("Closest Sum = " + result);
    }
}

class Solution {
    public int closest3Sum(int[] arr, int target) {
        Arrays.sort(arr);
        int n = arr.length;
        int small = Integer.MAX_VALUE;
        int resultValue = 0;

        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;
            while (left < right) {
                int sum = arr[i] + arr[left] + arr[right];
                int sub = Math.abs(target - sum);

                if (sub < small || (sub == small && sum > resultValue)) {
                    small = sub;
                    resultValue = sum;
                }

                if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        return resultValue;
    }
}