#include<stdio.h>

int main(){

    int t, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        int a[n], x, found= 0;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }
        scanf("%d", &x);
        for (int j = 0; j < n; j++)
        {
            if(a[j] == x) {
                found++;
                break;
            }
        }
        if(found == 0) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}