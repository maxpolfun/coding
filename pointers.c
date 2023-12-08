#include <stdio.h>

int main(){
    char string[] = "string";
    void *ptr;
    ptr = string;
    ptr = ptr+1;
    printf(" %c\n", *(char*)ptr);
    return 0;
}