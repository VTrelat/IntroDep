#include <stdio.h>

int main(){
    int n;
    printf("Enter an int value : ");
    scanf("%d", &n);
    printf("You entered %d at address %p\n", n, &n);
    return 0;
}