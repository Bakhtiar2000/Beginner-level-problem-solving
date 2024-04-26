#include <stdio.h>

int main()
{

    int n, a;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        do
        {
            printf("%d ", a % 10);
            a /= 10;
        } while (a != 0); // If any input value is 0, it will not be executed if while loop was used. As we use do while, 0 will be printed first time as output because condition will be checked later.
        printf("\n");
    }
    return 0;
}