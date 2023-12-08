#include <stdlib.h>
#include <stdio.h>

int main()
{
    char *dir = getenv("PATH");
    printf(" %s", dir);
    return 0;
}