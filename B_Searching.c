#include<stdio.h>

int main(){

    int n, searched, ind=-1;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &searched);

    for (int i = 0; i < n; i++)
    {
        if(a[i] == searched){
            ind= i;
            break;
        }
    }
    printf("%d\n", ind);
    return 0;
}