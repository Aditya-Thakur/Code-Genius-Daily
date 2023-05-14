// 1. Print 1 to 15 numbers
// 2. Print 10 to 1 numbers
// 3. Sum of first n even numbers
// 4. Sum of first & last digit of number
// 5. Sum of all digits of number
// 6. Print reverse of a number


#include<stdio.h>

int main() {
    int num;
    printf("Enter a 4 digit integer to get it's reverse: ");
    scanf("%d", &num);
    int reverseNum = 0;
    for(int i=0; i < 4; i++) {
        int currentLastDigit = num % 10;
        reverseNum = (reverseNum * 10) + currentLastDigit;
        num = num / 10;
    }
    printf("Reverse is %d\n", reverseNum);
    return 0;
}