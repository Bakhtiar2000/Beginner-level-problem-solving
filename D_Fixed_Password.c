#include <stdio.h>

int main()
{

    int n;
    while (scanf("%d", &n) != EOF) // No limitation for taking input is declared. So we take input up to end of file in a while loop
    {
        if (n == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
            printf("Wrong\n");
    }

    return 0;
}