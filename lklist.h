#ifndef LKLIST_H
#define LKLIST_H
#include "memory.h"

typedef struct lklist{
    void* val;
    struct lklist* next;
}lklist;

lklist* lklist_create();
void lklist_set(lklist* list,void* val);
void lklist_seti(lklist* list,int index,void* val);
lklist* lklist_get(lklist* list,int index);

typedef struct lk2list{
    char* val;
    struct lk2list* pre;
    struct lk2list* next; 
}lk2list;

#endif
