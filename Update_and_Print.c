#include<stdio.h>

int main(){

    int n, ind, val;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d %d", &ind, &val);
    a[ind] = val;

    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    
    
    return 0;
}