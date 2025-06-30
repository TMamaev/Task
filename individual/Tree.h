#ifndef STACK_H  
#define STACK_H 
#include <stdlib.h>

typedef struct s_btree
{
    void* data;
    struct s_btree *left;
    struct s_btree *right;
} t_btree;
t_btree *btree_new(void* n, t_btree *left, t_btree *right);

#endif