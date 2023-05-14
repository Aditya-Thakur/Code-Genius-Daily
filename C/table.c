#include<stdio.h>

int main() {
    // this is a program to learn about loop
    printf("Print Table\n");
    int number;
    printf("Enter number to print it's table: ");
    scanf("%d", &number);
    for(int i = 1; i<=10; i++) {
        printf("%d x %d = %d\n", number, i, number*i);
    }
    return 0;  
}