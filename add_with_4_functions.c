//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
int inputa()
{
    
    int a;
    scanf("%d",&a);
    return a;
}
int inputb()
{
    int b;
    scanf("%d",&b);
    return b;
}
int Sum(int a,int b)
{
    int sum=a+b;
    return sum;
}
int main()
{
    printf("Enter a:");
    int a=inputa();
    printf("Enter b:");
    int b=inputb();

    printf("The sum is : %d",Sum(a,b));
return 0;
}
