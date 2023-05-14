#include <stdio.h>

int main()
{
    int marks;
    printf("Apna marks batao 0 aur 100 ke bich: ");
    scanf("%d", &marks);
    if (marks >= 0 && marks <= 100)
    {
        printf("Abhi aapka result deta hu\n");
        if (marks >= 33)
        {
            printf("Aap to pass ho gaye.\n");
        }
        if (marks == 100)
        {
            printf("Aap to topper nikkle.\n");
        }
        if (marks < 33)
        {
            printf("Aap to fail ho gaye.\n");
        }
    }
    if( marks < 0 || marks > 100 ) {
        printf("chal jhutha\nmarks 0 aur 100 ke bich me hota hai.\n");
    }

    return 0;
}