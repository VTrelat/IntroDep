#include <stdio.h>

void print_tableau(int t[], int size){
    printf("{");
    for(int i=0; i<size; i++){
        printf("%d ", *(t+i));
    }
    printf("}\n");
}

int main(){
    int t1[5] = {1,2,3,4,5};
    int t2[5] = {5,4,3,2,1};
    int r[5];
    for (int i=0; i<5; i++){
        r[i]=t1[i]+t2[i];
    }
    print_tableau(r, 5);
    return 0;
}