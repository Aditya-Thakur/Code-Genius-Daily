#include <stdio.h>
#include <stdbool.h>
bool checkPrime(int number);
int main()
{
    int num;
    printf("Program to check prime number.\n Enter number: ");
    scanf("%d", &num);
    bool isNumberPrime = checkPrime(num);
    if (isNumberPrime)
    {
        printf("%d is prime.\n", num);
    } 
    else {
        printf("%d is not prime.\n", num);
    }
    return 0;
}

bool checkPrime(int number) {
    bool isPrime = true;
    for (int i = 2; i <= number/2; i++)
    {
        if (number % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}