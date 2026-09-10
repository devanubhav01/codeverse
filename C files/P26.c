#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void enqueue(struct node *f,struct node *r,int val){
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
             
         }
     }
}












int main(){
    struct node *f = NULL;
    struct node *r = NULL;
    enqueue(f, r, 50);
    return 0;
}