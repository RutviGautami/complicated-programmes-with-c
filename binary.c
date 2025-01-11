//Rutvi Gautami
#include <stdio.h>
void main()
{
    int a;
    printf("Enter Number: ");
    scanf("%d", &a);
    int b[32] = {0}, i = 0, m = 0, count = 0, n = a;
    // for positive
    if (a > 0)
    {
        for (; a > 0;)
        {
            b[i] = a % 2;
            i++;
            a = a / 2;
            m++;
        }
    }

    //for negetive
    if (a < 0)
    {
        //binary of modulus of negetive number
        a = (-1) * a; 
        for (; a > 0;)
        {
            b[i] = a % 2;
            i++;
            a = a / 2;
            m++;
        }

        //logic for 2s compliment
        //from right side until 1 number is as it is
        for (i = 0; b[i] == 0; i++)
        {
            count++;
        }

        //after 1 1s compliment
        for (i = count + 1; i <= 32; i++)
        {
            if (b[i] == 0)
            {
                b[i] = 1;
            }
            else
            {
                b[i] = 0;
            }
        }
    }

    //print it in reverse order
    for (i = 32; i >= 0; i--)
    {
        printf("%d", b[i]);
    }
}