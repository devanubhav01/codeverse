#include <stdio.h>
#include <stdlib.h>

struct stack{
    int top;
    int size;
    int *arr;
};

int main(){
    struct stack s;
    s.size = 50;
    s.top = -1;
    s.arr = (int *)malloc(s.size * sizeof(int));

    struct stack *s;
}