#include <stdio.h>

int main()
{
    int marks;
    printf("Apna marks batao: ");
    scanf("%d", &marks);
    if (marks >= 0 && marks <= 100)
    {
        if (marks >= 33)
        {
            printf("Aap to pass ho gaye.\n");
            if (marks == 100)
            {
                printf("Aap to topper nikkle.\n");
            }
        }
        else
        {
            printf("Aap to fail ho gaye.\n");
        }
    }
    else
    {
        printf("chal jhutha\nmarks 0 aur 100 ke bich me hota hai.\n");
    }

    return 0;
}