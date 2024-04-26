#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int m;
    scanf("%d", &m);
    int b[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    int copy[n+m];
    for (int i = 0; i < n; i++)
    {
        copy[i] = a[i];
    }

    int index = n;
    for (int i = 0; i < m; i++)
    {
        copy[index] = b[i];
        index++;
    }
    
    for (int i = 0; i < n+m; i++)
    {
        printf("%d ", copy[i]);
    }
    return 0;
}