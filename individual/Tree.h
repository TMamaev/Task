#ifndef TREE_H  
#define TREE_H 
#include <stdlib.h>

typedef struct s_btree
{
    void* data;
    struct s_btree *left;
    struct s_btree *right;
} t_btree;
t_btree *btree_new(void* new, t_btree *left, t_btree *right);

#endif
