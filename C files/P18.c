 #include <stdio.h>
 #include <stdlib.h>

 struct stack{
     int top;
     int size;
     int *arr;
 };
 

void push(struct stack *ptr,int data){
    ptr->top++;
    ptr->arr[ptr->top]=data;
}


int pop(struct stack *ptr){
    int value = ptr->arr[ptr->top];
    ptr->top--; 
    return value;
}


int peek(struct stack *z,int i){
    int v = z->top - i + 1;
    if(v<0){
        printf("Not a valid position ");
        return -1;
    }else{
        return z->arr[v];
    }
}

 int main(){
     struct stack *z = (struct stack *)malloc(sizeof(struct stack));
     z->size = 7;
     z->top = - 1;
     z->arr = (int *)malloc(z->size*sizeof(int));

     push(z, 50);
     push(z, 55);
     push(z, 60);
     push(z, 65);
     push(z, 70);
     push(z, 75);
     push(z, 80);
    
    printf(" %d ", pop(z));

     return 0;
 }