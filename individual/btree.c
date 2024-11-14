#include <stdlib.h>

typedef struct s_btree
{
    int data;
    struct s_btree *left;
    struct s_btree *right;
} t_btree;

t_btree *btree_new(int n, t_btree *left, t_btree *right)
{
    t_btree *tree = malloc(sizeof(t_btree));
    if (tree != NULL)
    {
        tree->data = n;
        tree->left = left;
        tree->right = right;
    }
    return tree;
}

//       6
//      / \
//     2   9
//    /     \
//   1       11

// preorder
// inorder
// postorder traversal

typedef struct list_stack
{
    t_btree *root;
    struct list_stack *next;
} t_stack;

void push(t_stack** list, t_btree* n)
{
    t_stack *new = malloc(sizeof(t_stack));
    
    if (!list || (new = malloc(sizeof(t_stack))) == NULL)
        return ;

    new->root = n;
    new->next = *list;
    *list = new;
}

void pop(t_stack** list)
{
    t_stack *copy_head;

    if (!list || !*list)
        return ;
    
    copy_head = *list;
    *list = (*list)->next;
    free(copy_head);
}


//       6
//      / \
//     2   9
//    /     \
//   1       11

void norderTraversal(struct s_btree* root)
{
    if (root == NULL)
        return ;
    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}

void inorderTraversal(struct s_btree* root) {
    t_stack *stack = NULL;
    t_btree *temp = NULL;

    while (root || stack != NULL)
    {
        while (root != NULL)
        {
            push(&stack, root);
            root = root->left;
        }
        
        temp = stack->root;
        pop(&stack);
        if (temp != NULL)
        {
            printf("%d ", temp->data);
            root = temp->right;
        }
    }
}



int Symmetric(t_btree* l, t_btree* r)
{
    if (l == NULL || r == NULL) 
    {
        return (l == r);
    }
    if (l->data != r->data) 
    {
        return 0;
    }
    return (Symmetric(l->left, r->right) && Symmetric(l->right, r->left));
}
int isSymmetric(t_btree* root) {
    return Symmetric(root->left, root->right);
}


int isSameTree(t_btree* p, t_btree* q) {
    if (p == NULL || q == NULL) 
    { 
        return (p == q);
    }
    if (p->data != q->data) 
    { 
        return 0;
    }
    return (isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
    
}

int main()
{
    t_btree *root = btree_new(6,
                              btree_new(2,
                                        btree_new(1, NULL, NULL),
                                        NULL),
                              btree_new(9,
                                        NULL,
                                        btree_new(11, NULL, NULL)));
    inorderTraversal(root);

    return 0;
}
