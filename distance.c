#include<stdio.h>
#include<math.h>
float point1()
{
   float x;
   scanf("%f",&x);
   return x;
}
float point2()
{
   float y;
   scanf("%f",&y);
   return y;
}
float distance(float x1, float y1, float x2, float y2)
{
    
    float d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    return d;
}
int main()
{
   printf("Enter x1 and y1: ");
   float x1=point1();
   float y1=point2();
   printf("Enter x2 and y2: ");
   float x2=point1();
   float y2=point2();
   printf("The distance between %f, %f and %f, %f is %f",x1,y1,x2,y2,distance(x1,y1,x2,y2));
   return 0;
}
