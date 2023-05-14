#include <stdio.h>

int main()
{
    int num;
    long mul = 1;
    printf("Mul of n even numbers. Enter n: ");
    scanf("%d", &num);
    for (int i = 2; i <= num*2; i = i + 2) {
     mul = mul * i;
    }
    printf("Mul is %ld\n", mul);
    return 0;
}
