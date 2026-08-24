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
struct node *add_at_end(struct node *head, int data)
{
    struct node *tom = malloc(sizeof(struct node));
    tom->prev = NULL;
    tom->data = data;
    tom->link = NULL;
    struct node *temp = head;
    while (temp->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = tom;
    tom->prev = temp;
    return head;
}

struct node *add_at_pos(struct node *head, int pos, int data)
{
    struct node *temp, *temp2;
    struct node *ptr = malloc(sizeof(struct node));
    ptr->prev = NULL;
    ptr->data = data;
    ptr->link = NULL;
    temp2 = NULL;
    temp = head;

    while (pos != 1)
    {
        temp = temp->link;
        pos--;
    }
    temp2 = temp->link;
    temp->link = ptr;
    temp2->prev = ptr;
    ptr->prev = temp;
    ptr->link = temp2;
    return head;
}

struct node *del_beg(struct node *head)
{
    struct node *temp = head;
    head = head->link;
    head->prev = NULL;
    free(temp);
    temp = NULL;
    return head;
}

struct node *del_last(struct node *head)
{
    struct node *temp = head;
    struct node *temp2 = NULL;
    while (temp->link != NULL)
    {
        temp = temp->link;
    }
    temp2 = temp->prev;
    temp2->link = NULL;
    free(temp);
    temp = NULL;
    return head;
}

int main()
{
    struct node *head = NULL;
    head = addToEmpty(head, 45);
    head = add_beg(head, 55);
    head = add_at_end(head, 95);
    head = add_at_pos(head, 2, 100);
    head = del_beg(head);
    head = del_last(head);

    print(head);

    return 0;
}