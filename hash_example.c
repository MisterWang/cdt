#include <stdio.h>


unsigned long has_code(char* name){
    unsigned long value = 0L;

    if (name != NULL) {
	while (*name) {
	    value = value ^ ((value << 5) + (value >> 3)) + *name++;
	}
    }

    return value;
}

unsigned long has_31(char *name){
    unsigned long value = 0L;
    while(*name){
        value += value^(value<<5)+*name++;
    }
    return value;
}


int main(){
    printf("%d\n",has_code("test"));
    printf("%d\n",has_code("aaaa"));
    printf("%d\n",has_code("bbbb"));
    printf("%d\n",has_code("cccc"));
    printf("%d\n",has_code("aa"));
    printf("%d\n",has_code("ab"));
    printf("%d\n",has_code("ac"));

    printf("\n");
    printf("%d\n",has_31("test"));
    printf("%d\n",has_31("aaaa"));
    printf("%d\n",has_31("bbbb"));
    printf("%d\n",has_31("cccc"));
    printf("%d\n",has_31("aa"));
    printf("%d\n",has_31("ab"));
    printf("%d\n",has_31("ac"));

}