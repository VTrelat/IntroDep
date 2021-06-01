#include <stdio.h>
#include "module.h"

int addone(int x){
    return x+1;
}

int fibo(int n){
    int x1=1;
    int x2=1;
    if(n==0){
        return x1;
    }
    if(n==1){
        return x2;
    }
    else{
        for(int i = 2; i<=n; i++){
            x2=x2+x1;
            x1=x2-x1;
        }
        return x2;
    }
}

int main(void){
    int n=50;
    printf("%dth Fibonacci term : %d\n", n, fibo(n));
    return 0;
}