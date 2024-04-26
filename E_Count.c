#include<stdio.h>
#include<string.h>

int main(){

    int sum=0;
    char a[1000001];
    scanf("%s", &a);

    for (int i = 0; i < strlen(a); i++)
    {
        sum += a[i] - '0';
    }
    printf("%d", sum);
    return 0;
}