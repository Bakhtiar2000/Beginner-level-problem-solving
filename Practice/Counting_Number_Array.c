#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int count[7] = {0}; //count[7] because I want to see the count of values till the number 6. count[7]= {0} because all the index will be initialized with the number 0.
    for (int i = 0; i < n; i++)
    {
        count[a[i]]++; //If i=2 , a[i]= 4. So count[4] will be incremented and become 1. If later a[i] = 4 comes again, count[4] will become 2.
    }
    for (int i = 0; i < 7; i++)
    {
        printf("The number '%d' comes %d times\n", i , count[i]);
    }
    return 0;
}