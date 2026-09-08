#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
    int size;
    int top;
    char *arr;
};

int match(char a, char b)
{
    if (a == '{' && b == '}')
    {
        return 1;
    }
    if (a == '(' && b == ')')
    {
        return 1;
    }
    if (a == '[' && b == ']')
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int data)
{
    ptr->top++;
    ptr->arr[ptr->top] = data;
}

char pop(struct stack *ptr)
{
    char value = ptr->arr[ptr->top];
    ptr->top--;
    return value;
}

char stackTop(struct stack *z)
{
    return z->arr[z->top];
}

int precedence(char ch)
{
    if (ch == '*' || ch == '/')
    {
        return 3;
    }
    else if (ch == '+' || ch == '-')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

int isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

char *infixToPostfix(char *infix)
{
    struct stack *z = (struct stack *)malloc(sizeof(struct stack));
    z->size = 100;
    z->top = -1;
    z->arr = (char *)malloc(z->size * sizeof(char));
    char *postfix = (char *)malloc((strlen(infix) + 1) * sizeof(char));
    int i = 0; // track infix traversal
    int j = 0; // Track postfix addition
    while (infix[i] != '\0')
    {
        if (!isOperator(infix[i]))
        {
            postfix[j] = infix[i];
            j++;
            i++;
        }
        else
        {
            if (precedence(infix[i]) > precedence(stackTop(z)))
            {
                push(z, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(z);
                j++;
            }
        }
    }

    while (!isEmpty(z))
    {
        postfix[j] = pop(z);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}

int main()
{
    char *infix = "a-b";

    printf("postfix is %s", infixToPostfix(infix));

    return 0;
}