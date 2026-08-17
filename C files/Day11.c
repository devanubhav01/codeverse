#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
void count_of_nodes(struct node *head)
{
    int count = 0;
    if (head == NULL)
    {
        printf("empty");
    }
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    printf("%d", count);
}

void print_data(struct node *head)
{
    if (head == NULL)
    {
        printf("empty");
    }
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        printf(" %d ", ptr->data);
        ptr = ptr->link;
    }
}

void add_at_end(struct node *head, int data)
{
    struct node *ptr, *temp;
    ptr = head;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}

struct node *add_beg(struct node *head, int d)
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = d;
    ptr->link = NULL;
    ptr->link = head;
    head = ptr;
    return head;
}

void add_at_pos(struct node *head, int data, int pos)
{
    struct node *ptr = head;
    struct node *ptr2 = malloc(sizeof(struct node));
    ptr2->data = data;
    ptr2->link = NULL;
    pos--;
    while (pos != 1)
    {
        ptr = ptr->link;
        pos--;
    }
    ptr2->link = ptr->link;
    ptr->link = ptr2;
}

struct node *del_first(struct node *head)
{
    if (head == NULL)
        printf("List is already empty!");
    else
    {
        struct node *temp = head;
        head = head->link;
        free(temp);
    }
    return head;
}

// struct node *del_last(struct node *head)
// {
//     if (head == NULL)
//         printf("List is already empty!");
//     else if (head->link == NULL)
//     {
//         free(head);
//         head = NULL;
//     }
//     else
//     {
//         struct node *temp = head;
//         struct node *temp2 = head;
//         while (temp->link != NULL)
//         {
//             temp2 = temp;
//             temp = temp->link;
//         }
//         temp2->link = NULL;
//         free(temp);
//         temp = NULL;
//     }
//     return head;
// }
void del_last(struct node *head)
{
    if (head == NULL)
        printf("List is already empty!");
    else if (head->link == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        struct node *temp = head;
        while (temp->link->link != NULL)
        {
            temp = temp->link;
        }
        free(temp->link);
        temp->link = NULL;
    }
}
void del_pos(struct node **head, int position)
{
    struct node *current = *head;
    struct node *previous = *head;
    if (*head == NULL)
        printf("List is already empty!");
    else if (position == 1)
    {
        *head = current->link;
        free(current);
        current = NULL;
    }
    else
    {
        while (position != 1)
        {
            previous = current;
            current = current->link;
            position--;
        }
        previous->link = current->link;
        free(current);
        current = NULL;
    }
}
struct node *del_list(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        temp = temp->link;
        free(head);
        head = temp;
    }
    return head;
}

struct node *reverse(struct node *head)
{
    struct node *prev = NULL;
    struct node *next = NULL;
    while (head != NULL)
    {
        next = head->link;
        head->link = prev;
        prev = head;
        head = next;
    }
    head = prev;
    return head;
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *ptr = head;
    add_at_end(ptr, 50);
    add_at_end(ptr, 55);
    add_at_end(ptr, 60);

    // count_of_nodes(head);
    add_at_end(head, 67);
    head = add_beg(head, 70);

    add_at_pos(head, 77, 2);
    // head = del_first(head);
    // head = del_last(head);
    // del_last(head);
    del_pos(&head, 1);
    // head = del_list(head);
    //   head = reverse(head);
    print_data(head);

    return 0;
}