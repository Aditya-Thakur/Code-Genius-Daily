#include<stdio.h>

int main() {
    int first, second;
    printf("This is a program to sum two numbers.\n");
    printf("Please enter first number:- ");
    scanf("%d", &first);
    printf("Please enter second number:- ");
    scanf("%d", &second);
    int sum = first + second;
    printf("Sum of %d & %d is %d.\n", first, second, sum);
    return 0;  
}