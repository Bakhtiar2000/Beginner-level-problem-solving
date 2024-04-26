#include<stdio.h>
#include<string.h>

int main(){

    int n;
    scanf("%d", &n);
    char a[10001];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", a);
        int capital=0, small=0, digit=0;
        for (int j = 0; j < strlen(a); j++)
        {
            if(a[j]>= 'A' && a[j]<= 'Z') capital++;
            else if(a[j]>= 'a' && a[j]<= 'z') small++;
            else if(a[j]>= '0' && a[j]<= '9') digit++;
        }
        printf("%d %d %d\n", capital, small, digit);
    }
    
    return 0;
}