#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *link;
};

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->prev = NULL;
    head->data = 45;
    head->link = NULL;
    printf("%d", head->data);
    return 0;
}