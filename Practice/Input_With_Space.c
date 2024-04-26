#include<stdio.h>
#include<string.h>

int main(){

    int n;
    char a[100];
    // gets(a);
    fgets (a, 8, stdin);
    printf("%s", a);
    return 0;
}