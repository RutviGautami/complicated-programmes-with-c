#include <stdio.h>
void main()
{
    int j, i, k;
    for (i = 1; i <= 2; i++)
    {
        for (k = 1; k <= 10 - i; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf(". ");
        }
        printf("\n");
    }
    for (i = 3; i >= 1; i--)
    {
        for (k = 1; k <= 10 - i; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf(". ");
        }
        printf("\n");
    }
    for (i = 9; i >= 5; i--)
    {
        for (k = 1; k <= 10 - i; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf(". ");
        }
        printf("\n");
    }
}