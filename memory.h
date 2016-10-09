#ifndef MEMORY_H
#define MEMORY_H

#include <stdlib.h>
#define MEM_CREATE(size) malloc(size)
#define MEM_FREE(pt) free(pt)
#endif