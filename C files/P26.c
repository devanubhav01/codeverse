#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};
struct node *f = NULL;
struct node *r = NULL;

void print(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
}

void enqueue(int val){
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if(n==NULL){
        printf("Queue is full");
    }else{
        n->data = val;
        n->link = NULL;
        if(f==NULL){
            f = r = n;
        }else{
            r->link = n;
            r = n;
        }
    }
}

int dequeue(){
    int val = -1;
    struct node *ptr = f;
    if(f==NULL){
        printf("Queue is empty");
    }else{
        f = f->link;
        val = ptr->data;
        free(ptr);
    }
    return val;
}



int main(){
    
    enqueue(50);
    enqueue(55);
    enqueue(60);
    printf("%d\n", dequeue());
    print(f);
    

    return 0;
}