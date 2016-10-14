#include <stdio.h>

#include "tree.h"
#include "arr.h"
#include "lklist.h"

// #define PAUSE {printf("press  enter to continue \n");fgetc(stdin);}
#define PAUSE system("pause");

void test_bnt();
void test_arr(); 

int main(){
    // test_arr();
    test_bnt();
    // arrval* val=ARRVALM(10);

    PAUSE
    return 0;
}

void test_arr(){
    arr* list=arr_create(0);
    arrval* v1=ARRVAL();
    v1->val.str="abc";
    arr_set(list,0,v1);
    
}

void test_bnt(){
    bnrtree* tree=bnrtree_create(3);
    int a[]={1,3,4,23,4};
    int i;
    for(i=0;i<5;i++){
        bnrtree_append_val(tree,a[i]);
    }
    
    lklist* list=lklist_create();
    bnrtree_printf(tree,0,list);
    lklist* temp=list;
    arr* arr=NULL;
    while(temp->next){
       temp=temp->next;
       arr=temp->val;
       arrval* arvals;
    //    for(i=0;i<arr->size;i++){
    //         arvals=arr_get(arr,i);
    //         if(arvals->val.a)
    //             printf("%d ",arvals->val.a);
    //    }
    //    printf("\n");
    }
    
}