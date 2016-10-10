#ifndef LKLIST_H
#define LKLIST_H
#include "memory.h"

typedef struct lklist{
    char* val;
    lklist* next;
}lklist;

void lklist_set(lklist* list,char* val);
lklist* lklist_get(lklist* list,int index);

#endif
