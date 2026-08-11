#include <stdio.h>
#include <stdlib.h>
 
struct node{
    int data;
    struct node *link;
};
void print_data(struct node *head) {
if(head == NULL)
printf("Linked List is empty");
struct node *ptr = NULL;
ptr = head;
while(ptr != NULL) {
printf("%d ", ptr->data);
ptr = ptr->link;
}
}

int main(){
    struct node *head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *current=malloc(sizeof(struct node));
    current->data=50;
    current->link=NULL;
    head->link=current;

    current =malloc(sizeof(struct node));
    current->data=4;
    current->link=NULL;

    head->link->link=current;
    print_data(head);
    add_at_end(head, 67);




    
    return 0;
}