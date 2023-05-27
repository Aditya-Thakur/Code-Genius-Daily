#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num;
    bool isPrime = true;
    printf("Program to check if given number is prime.\n Enter your number: ");
    scanf("%d", &num);
    for (int i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
        {
            printf("%d is not prime.\n", num);
            isPrime = false;
            break;
        }
    }
    if (isPrime)
    {
        printf("%d is prime.\n", num);
    }
    return 0;
}