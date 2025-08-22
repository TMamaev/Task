#include <Tree.h>

t_btree *btree_new(void* new, t_btree *left, t_btree *right)
{
    t_btree *tree = malloc(sizeof(t_btree));
    if (tree != NULL)
    {
        tree->data = new;
        tree->left = left;
        tree->right = right;
    }
    return tree;
}
