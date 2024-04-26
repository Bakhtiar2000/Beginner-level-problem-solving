#include<stdio.h>

int main(){

    int n, m1[1001], m2[1001], d[101], t[1001];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &m1[i], &m2[i], &d[i]);
        t[i] = m1[i]* d[i]/(m1[i]+ m2[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", d[i]- t[i]);
    }
    
    return 0;
}