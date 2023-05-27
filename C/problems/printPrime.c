#include <stdio.h>
#include <stdbool.h>

bool checkPrime(int arg); // retutnType functionName(argumentDataType argumentName)

int main()
{
    int num;
    printf("Program to print first n prime numbers.\n Enter n: ");
    scanf("%d", &num);
    int count = 0;
    int number = 1;
    printf("These are first %d prime numbers.\n", num);
    while(count <= num) {
        if(checkPrime(number)) {
            printf("%d ", number);
            count++;
        }
        number++;
    }
    printf("\n");
    return 0;
}

bool checkPrime(int arg) {
    bool isPrime = true;
    for (int i = 2; i <= arg/2; i++)
    {
        if (arg % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}