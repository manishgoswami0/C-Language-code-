//factorial program

// #include<stdio.h>

// int fact(int n);

// int main(){
//     int n;
//     printf("Enter the factorial number: ");
//     scanf("%d",&n);
//     printf("factorial %d",fact(n));
//     return 0;
// }

// int fact(int n){
//     if (n==1){
//         return 1;
//     }
//     int factNm1 =fact(n-1);
//     int factN=factNm1 * n;
//     return factN;
// }

// far and celsius 
// #include<stdio.h>

// float convertTemp(float celsius);

// int main(){
//     float far = convertTemp(37);
//     printf("far:%f",far);
//     return 0;
// }

// float convertTemp(float celsius){
//     float far = celsius * (9.0/5.0) + 32 ;
//     return far ;
// }

//percentage calculater 

// #include<stdio.h>

// int calcupercentage(int science, int maths, int hindi);

// int main(){
//     int science;
//     int maths;
//     int hindi;
//     printf("Enter the science marks:");
//     scanf("%d",&science);
//     printf("enter the maths marks: ");
//     scanf("%d",&maths);
//     printf("enter the hindi marks: ");
//     scanf("%d",&hindi);
//     printf("percentage: %d",calcupercentage(science,maths,hindi));
//     return 0;
// }

// int calcupercentage(int science, int math,int hindi){
//     return((science+math+hindi)/3);
// }

//fibonacci 

#include<stdio.h>

int fib(int n);

int main(){
    printf(" fibonacci number: %d",fib(5));
    return 0;
}

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibNm1=fib(n-1);
    int fibNm2=fib(n-2);
    int fibN=fibNm1+fibNm2;
    // printf("fib of %d is: %d\n",n,fibN);
    return fibN;
}