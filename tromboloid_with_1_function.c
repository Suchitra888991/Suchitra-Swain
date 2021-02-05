//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
int main()
{
int h,b,d;
float  vol;
printf(“Enter h,b,d”);
scanf(“%d%d%d”,&h,&b,&d);
vol = ((h*d*b)+(d/b))/3;
printf(“The volume of tromboloid is:%f”,vol);
return 0;
}
