#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *link;
};

void print(struct node *head)
{
    struct node *ptr = head;

    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
}

struct node *addToEmpty(struct node *head, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->link = NULL;
    head = temp;
    return head;
}

struct node *add_beg(struct node *head, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->link = head;
    head->prev = temp;
    head = temp;
    return head;
}

int main()
{
    struct node *head = NULL;
    head = addToEmpty(head, 45);
    head = add_beg(head, 55);
    print(head);

    return 0;
}