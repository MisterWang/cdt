#include "tree.h"
#include <math.h>

bnrtree* bnrtree_create(int val){
    bnrtree* tree=(bnrtree*)MEM_CREATE(sizeof(bnrtree));
    tree->val=val;
    tree->left=NULL;
    tree->right=NULL;
    return tree;
}

void bnrtree_append(bnrtree* tree,bnrtree* node){
    // printf("append_val:%d\n",node->val);
    if(tree->val>node->val){
        if(tree->right)bnrtree_append(tree->right,node);
        else tree->right=node;
    }else{
        if(tree->left)bnrtree_append(tree->left,node);
        else tree->left=node;
    }
}

void bnrtree_append_val(bnrtree* tree,int val){
    bnrtree* node = bnrtree_create(val);
    // node->val=val;
    bnrtree_append(tree,node);
}

void bnrtree_print(bnrtree* tree){
    printf("%d\n",tree->val);
    if(tree->left)
        bnrtree_print(tree->left);
    if(tree->right)
        bnrtree_print(tree->right);
}

//打印整棵树
void bnrtree_printf(bnrtree* tree,int deepth,lklist* list){
    lklist* cur=lklist_get(list,deepth);
    if(cur && cur->val){
        arrval* val=ARRVAL();
        val->val.a=tree->val;
        arr_append(cur->val,val);
        lklist_seti(list,deepth,cur);
    }else{
        arr* arr=arr_create(pow(2,deepth));
        arrval* val=ARRVAL();
        val->val.a=tree->val;
        arr_append(arr,val);
        lklist_seti(list,deepth,arr);
    }
    
    if(tree->right)bnrtree_printf(tree->right,deepth+1,list);
    if(tree->left)bnrtree_printf(tree->left,deepth+1,list);
    
    if(deepth==0){
        printf("***print tree list ...***\n");
    }
}
