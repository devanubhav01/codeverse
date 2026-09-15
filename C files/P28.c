#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n;                                 // creating a node pointer
    n = (struct node *)malloc(sizeof(struct node)); // Allocating memory in the heap
    n->data = data;                                 // Setting the data
    n->left = NULL;                                 // Setting the left and right children to NULL
    n->right = NULL;                                // Setting the left and right children to NULL
    return n;                                       // Finally returning the created node
}

void preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
   
}
void postOrder(struct node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}
   
void inOrder(struct node *root)
{   
    if (root != NULL)
    {
        
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
   
}

int main()
{

    // Constructing the root node - Using Function (Recommended)
    struct node *p = createNode(7);
    struct node *p1 = createNode(2);
    struct node *p2 = createNode(1);
    struct node *p3 = createNode(0);
    struct node *p4 = createNode(4);
    // Finally The tree looks like this:
    //      4
    //     / \
    //    1   6
    //   / \
    //  5   2

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    printf("preorder-");
    preOrder(p);
    printf("\n");
    printf("postorder-");
    postOrder(p);
    printf("\n");
    printf("inorder-");
    inOrder(p);
    return 0;
}