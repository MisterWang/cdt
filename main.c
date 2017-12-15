#include <stdio.h>
//#include <math.h>

#include "tree.h"
#include "arr.h"
#include "lklist.h"

#define PAUSE {printf("\npress  enter to continue \n");fgetc(stdin);}
// #define PAUSE system("pause");

#define ROOT "root"

void test_bnt();
void test_arr(); 
void test_t();

int main(){
    // test_arr();
    // test_bnt();
    // arrval* val=ARRVALM(10);

    test_t();

    PAUSE
    return 0;
}

void test_arr(){
    arr* list=arr_create(0);
    arrval* v1=ARRVAL();
    v1->val.str="abc";
    arr_set(list,0,v1);
    
}

//无法打印左子树...
void test_bnt(){
    bnrtree* tree=bnrtree_create(3);
    // int a[]={3,4,2,23,4,1,3,5,7,25,57};
    int a[]={1,2,3,4,5};
    int i;
    for(i=0;i<5;i++){
        bnrtree_append_val(tree,a[i]);
    }
    
    lklist* list=lklist_create();
    bnrtree_printf(tree,0,list);

    //bnrtree_mknull
    //lklist_free
}

void test_t(){
    tree *tree=tree_create(ROOT);
    tree_append(tree,"html");
    tree_append(tree->child,"head");
    tree_append(tree->child,"body");
    tree_append(tree->child->child->brother,"div");
    tree_append(tree->child->child->brother,"div");    

    printf("***print tree***\n\n");
    tree_print(*tree);
}