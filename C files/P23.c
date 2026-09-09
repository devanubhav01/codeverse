#include <stdio.h>
#include <stdlib.h>

struct stack *top = NULL;

struct stack
{
    int data;
    struct stack *link;
};

struct stack *push(struct stack *head, int data)
{
    struct stack *ptr = (struct stack *)malloc(sizeof(struct stack));
    ptr->data = data;
    ptr->link = head;
    top = ptr;
    return top;
}

void print(struct stack *head)
{
    struct stack *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
}

int pop(struct stack *head)
{
    struct stack *temp = head;
    head = head->link;
    top = head;
    int value = temp->data;
    free(temp);
    return value;
}

int peek(int data)
{
    struct stack *ptr = top;
    for (int i = 0; (i < data - 1 && ptr != NULL); i++)
    {
        ptr = ptr->link;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
    else
    {
        return -1;
    }
}

int main()
{
    top = push(top, 75);
    top = push(top, 80);
    top = push(top, 85);
    top = push(top, 90);
    top = push(top, 95);
    // int element = pop(top);
    // printf("%d \n", element);
    // print(top);
    for (int i = 1; i < 6; i++)
    {
        printf("value at %d is %d \n", i, peek(i));
    }
    return 0;
}
