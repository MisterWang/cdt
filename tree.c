#include <math.h>
#include "tree.h"

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

/**
 * 打印整棵树
 * |
 * |**
 * |*****
 * |*****
 * 
 * */

void bnrtree_printf(bnrtree* tree,int deepth,lklist* list){
    lklist* cur=lklist_get(list,deepth);
    if(cur && cur->val){
        arrval* val=ARRVAL();
        val->val.a=tree->val;
        arr_append(cur->val,val);
        // lklist_seti(list,deepth,cur);
    }else{
        arr* arr=arr_create(pow(2,deepth));
        arrval* val=ARRVAL();
        val->val.a=tree->val;
        arr_append(arr,val);
        lklist_seti(list,deepth,arr);
    }
    
    if(tree->left)bnrtree_printf(tree->left,deepth+1,list);
    if(tree->right)bnrtree_printf(tree->right,deepth+1,list);
    
    if(deepth==0){
        printf("***print tree list ...***\n");
        
        lklist* temp=list;
        arr* arr=NULL;
        int i;
        while(temp->next){
            temp=temp->next;
            arr=temp->val;
            arrval* arvals;
            for(i=0;i<arr->size;i++){
                arvals=arr_get(arr,i);
                if(arvals->val.a)
                    printf("%d ",arvals->val.a);
            }
            printf("\n");
        }
    }
}


tree* tree_create(char* val){
    tree *tree=MEM_CREATE(sizeof(tree));
    tree->val=val;
    tree->child=NULL;
    tree->brother=NULL;
    return tree;
}

void tree_insert(tree *tree,char* val){
    while(tree->brother){
        tree=tree->brother;
    }

    tree->brother=tree_create(val);
}

void tree_append(tree *tree,char* val){
    if(!tree->child)
        tree->child=tree_create(NULL);
    tree_insert(tree->child,val);
}

tree* tree_search(){
    
}

void tree_print(tree tree){
    if(tree.val)printf("%s ",tree.val);

    if(tree.brother)tree_print(*tree.brother);
    else printf("\n");
    if(tree.child)tree_print(*tree.child);
}