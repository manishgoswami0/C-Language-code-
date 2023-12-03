// grade program
#include <stdio.h>
int main()
{
    int marks;
    printf("enter the number(0-100):  ");
    scanf("%d", &marks);
    if (marks < 30)
    {
        printf("GRADE 'c' ");
    }
    else if (marks >= 30 && marks < 70)
    {
        printf("GRADE 'B'");
    }
    else if (marks > 70 && marks < 90)
    {
        printf("GRADE 'A'");
    }
    else
    {
        printf("GRADE A++");
    }
    return 0;
}
// vote program
#include <stdio.h>
int main()
{
    int vote;
    printf("enter the age : ");
    scanf("%d", &vote);
    if (vote >= 25)
    {
        printf("you can vote and  you can stand for election ");
    }
    else if (vote >= 18 && vote <= 25)
    {
        printf("you can vote");
    }
    else if (vote >= 13 && vote <= 18)
    {
        printf("not vote");
    }
    else
    {
        printf("you are teenage");
    }
    return 0;
}
// upper case and lower case program
#include <stdio.h>
int main()
{
    char character;
    printf("Enter the character(A-Z),(a-Z): ");
    scanf("%s", &character);
    if (character >= 'A' && character <= 'Z')
    {
        printf("It is upper case ");
    }
    else if (character >= 'a' && character <= 'z')
    {
        printf("It is lower case");
    }
    else
    {
        printf("This is not english letter");
    }
}