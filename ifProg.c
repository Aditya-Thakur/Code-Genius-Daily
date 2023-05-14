#include<stdio.h>

int main() {
    int marks = 10;
    printf("Apna marks batao: ");
    scanf("%d", &marks);
    if(marks >= 33) {
        printf("Aap to pass ho gaye.\n");
    }
    if(marks == 100) {
        printf("Aap to topper nikkle.\n");
    }
    if(marks < 33) {
        printf("Aap to fail ho gaye.\n");
    }
    return 0;
}