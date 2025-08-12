#include <Tree.h>

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

int* inorderTraversal(t_btree* root, int* returnSize) {
    t_stack *stack = NULL;
    int *ans = malloc(sizeof(int));
    t_btree *temp = NULL;
    int i = 0;

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
            (*returnSize)++;
            ans[i] = root->data;
            i++;
            root = temp->right;
        }
    }
    return ans;
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

// https://leetcode.com/problems/binary-search/
int search(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;
    int mid = right / 2;
    while (left <= right)
    {

        if (target == nums[mid])
            return mid;
        else if (target > nums[mid])
        {
            left = mid + 1;
            mid = (right + left) / 2;
        }
        else
        {
            right = mid - 1;
            mid = (right + left) / 2;
        }
    }
    return -1;
}

// https://leetcode.com/problems/sum-of-left-leaves/?envType=problem-list-v2&envId=tree
int sumOfLeftLeaves(t_btree* root) {
    int res = 0;

    if (root == NULL) 
    {
        return 0;
    }
    if (root->left != NULL && root->left->left == NULL && root->left->right == NULL)
    {
        res += root->left->data;
    }
    else
    {
        res += sumOfLeftLeaves(root->left);
    }
    res += sumOfLeftLeaves(root->right);
    return res;
}



// https://leetcode.com/problems/count-complete-tree-nodes/?envType=problem-list-v2&envId=tree
int countNodes(t_btree* root) {
    int res = 0;
    if (root == NULL) return 0;
    res++;
    res += countNodes(root->left);
    res += countNodes(root->right);

    return res;
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
