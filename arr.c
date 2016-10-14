#include "arr.h"

arr* arr_create(int size){
    if(size<=0)size=ARR_DEFAULT_SIZE;
    arr* list=(arr*)MEM_CREATE(sizeof(arr));
    list->size=size;
    arrval* val=ARRVALM(size);
    // memset(val,0,size*sizeof(arrval));
    list->val=val;
    return list;
}

void arr_set(arr* list,int i,arrval* val){
    arrval* node=list->val+i;
    *node=*val;
}
arrval* arr_get(arr* list,int i){
    return (arrval*)list->val+i;
}

//滿了后衹會在最後位插入
void arr_append(arr* list,arrval* val){
    arr* temp=list;
    int i=0;
    while(i<=list->size && temp->val){
        temp+=1;
        i++;
    }
    
    temp->val=val;
}

arrval* arrval_create(int size){
    if(size<=0)size=ARR_DEFAULT_SIZE;
    arrval* arvals=(arrval*)MEM_CREATE(sizeof(arrval)*size);
    memset(arvals,0,sizeof(arrval)*size);
    return arvals;
}