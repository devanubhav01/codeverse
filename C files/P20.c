#include <stdio.h>
#include <stdlib.h>
struct node *top = NULL;
struct node
{
    int data;
    struct node *link;
};

struct node *push(struct node *top, int data)
{
    struct node *z = (struct node *)malloc(sizeof(struct node));
    z->data = data;
    z->link = top;
    top = z;
    return top;
}

// struct node *pop(struct node *top){
//     struct node *ptr = top;
//     top = top->link;
//     int v = ptr->data;
//     free(ptr);
//     return top;
// }

int pop(struct node *head)
{
    struct node *ptr = head;
    top = head->link;
    int v = ptr->data;
    free(ptr);
    return v;
}

// int pop(struct node **top)
// {
//     struct node *ptr = *top;
//     *top = (*top)->link;
//     int v = ptr->data;
//     free(ptr);
//     return v;
// }

void print(struct node *top)
{
    struct node *ptr = top;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
}

int main()
{

    top = push(top, 50);
    top = push(top, 55);
    top = push(top, 60);
    top = push(top, 65);
    // top = pop(top);
    // int element = pop(&top);
    int element = pop(top);

    printf("%d \n", element);
    print(top);

    return 0;
}