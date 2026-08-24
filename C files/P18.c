 #include <stdio.h>
 #include <stdlib.h>

 struct stack{
     int top;
     int size;
     int *arr;
 };

 int main(){
     struct stack *z = (struct stack *)malloc(sizeof(struct stack));
     z->size = 10;
     z->top - 1;
     z->arr = (int *)malloc(z->size * sizeof(int));
 }