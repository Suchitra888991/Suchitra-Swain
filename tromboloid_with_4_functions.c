//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float input()
{
    int a;
    scanf(“%d”,&a);
    return a;
}
float vol(int h,int d,int b)
{
     float v=((h*b*d)+(d/b))/3;
     return v;
}
int result()
{
      print(“The volume of tromboloid is %f”,vol(h,b,d));
      return 0;
}
int main()
{
      float h,b,d;
      printf(“Enter h: ”);
      h=input();
      printf(“Enter b: ”);
      b=input();
      printf(“Enter d: ”);
      d=input();
      result(h,b,d);
      return 0;
}
       
