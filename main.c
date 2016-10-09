#include <stdio.h>

#include "tree.h"

// #define PAUSE {printf("press  enter to continue \n");fgetc(stdin);}
#define PAUSE system("pause");

int main(){
    bnrtree* tree=bnrtree_create(3);
    int a[]={1,3,4,23,4};
    int i;
    for(i=0;i<5;i++){
        bnrtree_append_val(tree,a[i]);
    }
    
    bnrtree_print(tree);
    PAUSE
    return 0;
}