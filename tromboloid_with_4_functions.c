//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
  float inputh(float h)
  {
    
    printf("Enter h: ");
    scanf("%f",&h);
    return h;
  }
  float inputb(float b)
  {
    
    printf("Enter b: ");
    scanf("%f",&b);
    return b;
  }
  float inputd(float d)
  {
   
    printf("Enter d: ");
    scanf("%f",&d);
    return d;
  }
  float volume(float h,float b, float d)
  {
    float vol=((h*b*d)+(d/b))/3;
    printf("The volume of tromboloid is %f",vol);  
  }
 int main()
 {
    float h,b,d;
    h=inputh(h);
    b=inputb(b);
    d=inputd(d);
    volume(h,b,d);
    return 0;
  }



       
