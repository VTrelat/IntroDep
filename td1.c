#include <stdio.h>
int squared(int x){
    return x*x;
};




int main(void){
    int a=5;
    printf("Hello World!\na = %d\n", a);
    printf("\na^2 = %d\n", squared(a));
    return 0;
}
