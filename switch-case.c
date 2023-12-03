#include <stdio.h>
int main()
{
    int day;
    printf("enter the number (1-7)");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("monday");
        break;
    case 2:
        printf("tue");
        break;
    case 3:
        printf("wed");
        break;
    case 4:
        printf("thur");
        break;
    case 5:
        printf("fir");
        break;
    case 6:
        printf("sat");
        break;
    case 7:
        printf("sun");
        break;

    default:
        printf("you enter not valid number ");
    }
}