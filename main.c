#include <stdio.h>
#include "NumClass.h"

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);

    if (x > y)
    {
        printf("The strong number is:");
        for (int i = y; i <= x; i++)
        {
            if (isStrong(i))
            {
                printf(" %d", i);
            }
        }

        printf("\n");
        printf("The palindrom number is:");
        for (int i = y; i <= x; i++)
        {
            if (isPalindrome(i))
            {
                printf(" %d", i);
            }
        }
        printf("\n");
        printf("The prime number is:");
        for (int i = y; i <= x; i++)
        {
            if (isPrime(i))
            {
                printf(" %d", i);
            }
        }
        printf("\n");
        printf("The armstrong number is:");
        for (int i = y; i <= x; i++)
        {
            if (isArmstrong(i))
            {
                printf(" %d", i);
            }
        }
        printf("\n");
    }
    else
    {
        printf("The strong number is:");
        for (int i = x; i <= y; i++)
        {
            if (isStrong(i))
            {
                printf(" %d", i);
            }
        }
        printf("\n");
        printf("The palindrom number is:");
        for (int i = x; i <= y; i++)
        {
            if (isPalindrome(i))
            {
                printf(" %d", i);
            }
        }
        printf("\n");
        printf("The prime number is:");
        for (int i = x; i <= y; i++)
        {
            if (isPrime(i))
            {
                printf(" %d", i);
            }
        }
        printf("\n");
        printf("The armstrong number is:");
        for (int i = x; i <= y; i++)
        {
            if (isArmstrong(i))
            {
                printf(" %d", i);
            }
        }
        printf("\n");
    }
    return 0;
}