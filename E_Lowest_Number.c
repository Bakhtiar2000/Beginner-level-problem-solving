#include<stdio.h>
#include<limits.h>

int main(){

    int n, ind;
    int lowest =INT_MAX;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if(a[i]< lowest){
            lowest = a[i];
            ind = i;
        }
    }

    printf("%d %d", lowest, ind+1);
    
    return 0;
}