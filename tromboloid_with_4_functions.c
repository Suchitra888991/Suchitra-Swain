//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float inputh()
{
    float h;
    scanf("%f",&h);
    return h;
}
float inputb()
{
    float b;
    scanf("%f",&b);
    return b;
}
float inputd()
{
    float d;
    scanf("%f",&d);
    return d;
}
int main()
{
      float h,b,d,vol;
      printf("Enter h: ");
      h=inputh();
      printf("Enter b: ");
      b=inputb();
      printf("Enter d: ");
      d=inputd();
      vol=((h*b*d)+(d/b))/3;
      printf("The volume of tromboloid is %f",vol);
      
      
return 0;
}

       
