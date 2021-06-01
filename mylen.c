#include <stdio.h>
int mylen(char s[]){
    int i;
    for(i = 0; s[i] != '\0'; i++);
    return i;
}

int cmpstr(char s1[], char s2[]){
    int n1 = mylen(s1);
    int n2 = mylen(s2);
    int n;
    if(n1 < n2){
        n=n1;
    }
    else{
        n=n2;
    }
    
    int i = 0;
    while(s1[i] == s2[i]){
        i++;
    }
    if(i==n){
        return 0;
    }
    if(s1[i]<s2[i]){
        return -1;
    }
    else{
        return 1;
    }
}

int main(){
    char s1[] = "abcd";
    char s2[] = "aaaaaaa";
    printf("%d\n", cmpstr(s1, s2));
    return 0;
}