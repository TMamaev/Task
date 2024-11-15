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

// https://leetcode.com/problems/binary-tree-inorder-traversal/?envType=problem-list-v2&envId=tree
void InorderTraversal(struct s_btree* root)
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

// https://leetcode.com/problems/symmetric-tree/?envType=problem-list-v2&envId=tree
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

// https://leetcode.com/problems/same-tree/description/?envType=problem-list-v2&envId=tree
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

// https://leetcode.com/problems/maximum-depth-of-binary-tree/?envType=problem-list-v2&envId=tree
int maxDepth(t_btree* root) {
    if (root == NULL) 
    { 
        return 0;
    }
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    if (left > right)
    {
        return left + 1;
    }
    else 
    {
        return right + 1;
    }
}

// https://leetcode.com/problems/minimum-depth-of-binary-tree/?envType=problem-list-v2&envId=tree
int minDepth(t_btree* root) {
    if (root == NULL) 
    { 
        return 0;
    }
    int left = minDepth(root->left);
    int right = minDepth(root->right);
    if (left == 0) 
    {
        return right + 1;
    }
    if (right == 0)
    {
        return left + 1;
    } 
    if (left <= right && left != 0)
    {
        return left + 1;
    }
    else
    {
        return right + 1;
    }
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
