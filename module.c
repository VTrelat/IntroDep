#include <stdio.h>
#include "module.h"

int addone(int x){
    return x+1;
}

int main(void){
    int x=5;
    printf("%d + 1 = %d\n", x, addone(x));
    return 0;
}