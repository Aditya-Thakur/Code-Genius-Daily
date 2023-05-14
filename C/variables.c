#include<stdio.h>

int main() {
    int num;
    short shortNum;
    float decNum;
    double longNum;
    long double longerNum;
    char ch;
    const int version = 1;
    num = 2;
    printf("num is %d\n", num);
    num = 4;
    printf("num is %d\n", num);
    decNum = 4.33;
    printf("num is %f\n", decNum);
    longNum = 45675.798;
    printf("num is %lf\n", longNum);
    ch = 'a';
    printf("char is %c\n", ch);
    return 0;  
}