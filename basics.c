/* cube area
#include<stdio.h>
int main (){
  int n;
  printf("enter the number");
  scanf("%d",&n);
  printf("area of cube %d",n*n*n);
   return 0;
}*/

/* perimeter of rectangle
#include<stdio.h>
int main (){
    int l,w;
    printf("area of l=");
    scanf("%d",&l);
    printf("area of  w=");
    scanf("%d",&w);
    printf("perimeter of rectangle=%d",(l+w)*2);
    return 0;
}*/
// simple calcution  (P * R * T) / 100
/*#include<stdio.h>
int main(){
int p,r,t;
printf("enter the principal amount=");
scanf("%d",&p);
printf("enter rate of interest=");
scanf("%d",&r);
printf("enter the time=");
scanf("%d",&t);
printf("simple interest = %d",(p*r*t)/100);
return 0;
}*/

/*#include<stdio.h>
int main(){
    int a=1.999999;
    printf("%d",a);
    return 0;
}*/
/*#include<stdio.h>
int main(){
    //int x=5*2-2*3;
    int x=5*2/2*3;
    printf("%d",x);
    return  0;
}*/
/*#include<stdio.h>
int main(){
int x;
printf("enter the number:");
scanf("%d",&x);
printf("%d",x % 2 == 0);
return 0;
}*/

/*#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the first a number:");
    scanf("%d",&a);
    printf("enter the second b number:");
    scanf("%d",&b);
    printf("enter the third c number:");
    scanf("%d",&c);
    printf("this is the avg of %d",a+b+c/3);
    return 0;

}*/

// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("enter the first number:");
//     scanf("%d",&a);
//     printf("enter the second number:");
//     scanf("%d",&b);
//     printf(" smallest number:%d",a<b?a:b);
//     return 0;

// }
// #include<stdio.h>
// int main(){
//     int vote;
//     printf("enter the age : ");
//     scanf("%d",&vote);
//     if (vote>=25) {
//         printf("you can vote and  you can stand for election ");
//     }
//     else if (vote>=18 && vote<=25) {
//         printf("you can vote");
//     }
//     else if(vote>=13 && vote<=18) {
//         printf("not vote");
//     }
//     else {
//         printf("you are teenage");
//     }
//     return 0;

// }
// #include<stdio.h>
// int main(){
//     int age;
//     printf("age");
//     scanf("%d",&age);
//     age>=18?printf("adult"):printf("not adult");
//     return 0;

// }
// #include <stdio.h>
// int main()
// {
//     int day;
//     printf("enter the number (1-7)");
//     scanf("%d", &day);
//     switch (day)
//     {
//     case 1:
//         printf("monday");
//         break;
//     case 2:
//         printf("tue");
//         break;
//     case 3:
//         printf("wed");
//         break;
//     case 4:
//         printf("thur");
//         break;
//     case 5:
//         printf("fir");
//         break;
//     case 6:
//         printf("sat");
//         break;
//     case 7:
//         printf("sun");
//         break;

//     default:
//         printf("you enter not valid number ");
//     }
// }
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