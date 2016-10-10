#ifndef TABLE_H
#define TABLE_H

typedef struct table{
    char* val;
    table* row;
    table* column;
}table;



#endif