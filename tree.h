#ifndef TREE_H
#define TREE_H

// #include <string.h>
#include <stdio.h>
#include "memory.h"

typedef struct bnrtree{
    int val;
    struct bnrtree* right;
    struct bnrtree* left;
}bnrtree;

bnrtree* bnrtree_create(int val);
void bnrtree_append(bnrtree* tree,bnrtree* node);
void bnrtree_append_val(bnrtree* tree,int val);
void bnrtree_mknull(bnrtree* tree);
void bnrtree_print(bnrtree* tree);

#endif