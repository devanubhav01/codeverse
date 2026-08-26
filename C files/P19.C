#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *link;
};

void print_data(struct node *head)
{
    if (head == NULL)
    {
        printf("empty");
    }
    struct Node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        printf(" %d ", ptr->data);
        ptr = ptr->link;
    }
}

int isEmpty(struct Node *top){
    if(top==NULL){
        return 1;
    }else{
        return 0;
    }
}

int isFull(struct node *top){
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));

    if(p==NULL){
        return 1;
    }else{
        return 0;
    }
}

struct Node *push(struct Node *top,int x){
    if(isFull(top)){
        printf("StackOverflow\n");
    }else{
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->link = top;
        top = n;
        return top;
    }
}

int main(){
    struct Node *top = NULL;
    top = push(top, 90);
    print_data(top);
    return 0;
}














