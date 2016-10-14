#ifndef ARR_H
#define ARR_H

#include "memory.h"

#define ARR_DEFAULT_SIZE 16;
#define ARRVAL() arrval_create(1);
#define ARRVALM(size) arrval_create(size);

typedef struct arrval
{
    int type;
    union {
        int a;
        char *str;
    } val;
} arrval;

arrval* arrval_create(int size);

typedef struct arr
{
    int size;
    arrval* val;
} arr;

arr* arr_create(int size);
void arr_set(arr *list, int index,arrval* val);
arrval* arr_get(arr *list, int index);
void arr_append(arr* list,arrval* val);

#endif