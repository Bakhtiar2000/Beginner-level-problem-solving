#include<stdio.h>
#include<string.h>

int main(){

    char s[1001], t[1001];
    scanf("%s %s", &s, &t);
    int SLength = strlen(s);
    int TLength = strlen(t);

    printf("%d %d\n", SLength, TLength);
    printf("%s %s\n", s, t);

    return 0;
}