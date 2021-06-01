#include <stdio.h>

void print_tableau(int t[], int size){
    printf("{");
    for(int i=0; i<size; i++){
        printf("%d ", *(t+i));
    }
    printf("}\n");
}

int main(){
    int n=100;
    int size=n/2;
    int t[size];
    for(int i=0; i<size; i++){
        t[i]=2*i;
    }
    print_tableau(t, size);
    return 0;
}