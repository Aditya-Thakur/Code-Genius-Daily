#include<stdio.h>

int main() {
    // this is a program to learn about loop
    printf("Print Table\n");
    float number;
    printf("Enter number to print it's table: ");
    scanf("%f", &number);
    for(int i = 1; i<=10; i++) {
        printf("%f x %d = %f\n", number, i, number*i);
    }
    return 0;  
}