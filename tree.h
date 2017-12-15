#ifndef TREE_H
#define TREE_H

#include <string.h>
#include <stdio.h>
//#include <math.h>
#include "memory.h"
#include "lklist.h"
#include "arr.h"

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
void bnrtree_printf(bnrtree* tree,int deepth,lklist* list);


typedef struct tree{
    char *val;
    struct tree *child;//子节点
    struct tree *brother;//同层节点
}tree;

tree* tree_create(char *val);
void tree_insert(tree *tree,char* val);
void tree_append(tree *tree,char* val);
void tree_mknull(tree *tree);
void tree_print(tree tree);

#endif