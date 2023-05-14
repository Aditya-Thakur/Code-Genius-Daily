// if else questions
// 1. check even odd
// 2. check leap year
// 3. check triangle type
// 4. convert temp 
// 5. greatest of 3 numbers
// 6. Check prime
// 3rd

#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter 3 sides of triangle: ");
    scanf("%d%d%d", &a, &b, &c);
    if(a==b && b==c) {
        printf("Equilateral triangle\n");
    } else {
        if((a == b && b != c) || (a ==c && b != c)) {
            printf("Isosclese triangle\n");
        } else {
            printf("Scalen triangle\n");
        }

    }
    return 0;
}