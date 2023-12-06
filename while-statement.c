//print the number is 0 to n is given by user
 #include<stdio.h>
 int main(){
     int n;
     printf("Enter the number: ");
     scanf("%d",&n);

    int i=0;
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
}

//print the sum of first n natural numbers
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d\n",&n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("sum is : %d\n", sum);
    return 0;
}

//2 *tables using for loop statement
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", n * i);
    }
    return 0;
}
 //odd number 

 #include<stdio.h>
 int main (){
    int n;
    do{
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("%d\n",n);
    if(n % 2!=0){
        break;
    }
    }while(1);
    return 0;
}
//keep taking numbers as input from user until user enters a number which is multiple of 7 
#include<stdio.h>
 int main (){
    int n;
    do{
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("%d\n",n);
    if(n % 7==0){//multiple by 7 
        break;
    }
    }while(1);
    return 0;
}

//factoral using for loop 
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf(" factorial of given number %d\n",fact);
    return 0;
}