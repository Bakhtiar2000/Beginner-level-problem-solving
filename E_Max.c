#include <stdio.h>

int main()
{

    int a, n, i, max = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a > max)
        {
            max = a;
        }
    }
    printf("%d", max);

    return 0;
}