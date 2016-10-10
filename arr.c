#include "arr.h"

arr* arr_create(int size){
    if(size<=0)size=ARR_DEFAULT_SIZE;
    arr* list=(arr*)MEM_CREATE(sizeof(arr));
    list->size=size;
    arrval* val=ARRVALM(size);
    list->val=val;
}

void arr_set(arr* list,int i,arrval* val){
    arrval* node=list->val+i;
    *node=*val;
}
arrval* arr_get(arr* list,int i){
    return (arrval*)list->val+i;
}

arrval* arrval_create(int size){
    if(size<=0)size=ARR_DEFAULT_SIZE;
    return (arrval*)MEM_CREATE(sizeof(arrval)*size);
}