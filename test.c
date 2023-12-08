#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    div_t res = div(10, 3);
    printf(" %d", res.quot);
    printf(" %d\n", res.rem);
    float g = sqrtf(-9);
    printf(" %lf", g);
    return 0;
}