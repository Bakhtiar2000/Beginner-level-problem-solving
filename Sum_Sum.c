#include<stdio.h>

int main(){

    int n, pos=0, neg=0;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]>0) pos+= a[i];
        else if(a[i]<0) neg+= a[i];
    }
    printf("%d %d", pos, neg);
    
    return 0;
}