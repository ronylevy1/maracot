#include "NumClass.h"

int sum1 = 0;
int sum2 = 1;

int isPrime(int number)
{
    if (number == 1)
    {
        return 1;
    }
    if (number % 2 == 0)
    {
        return 0;
    }
    if (number < 2)
    {
        return 0;
    }
    for (int i = 3; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}

int countDigits(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else
        return 1 + countDigits(num / 10);
}

int isStrong(int num)
{
    int originalNum = num;
    int sum = 0;
    int num2 = 0;
    while (originalNum != 0)
    {
        num2 = originalNum % 10;
        sum = sum + factorial(num2);
        originalNum = originalNum / 10;
    }

    if (num == sum)
    {
        return 1;
    }
    return 0;
}
