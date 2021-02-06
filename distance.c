//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
int input()
{
   int values;
   scanf(“%d”,&values);
   return values;
}
float distance(int x1, int y1, int x2, int y2)
{
    float d;
    float d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    return d;
}
int result(int x1, int y1, int x2, int y2)
{
     printf(“The distance between %d, %d and %d, %d is %f”,x1,y1,x2,y2,distance(x1,y1,x2,y2));
     return 0;
}
int main()
{
   printf(“Enter x1 and y1: ”);
   int x1=input();
   int y1=input();
   printf(“Enter x2 and y2: ”);
   int x2=input();
   int y2=input();
   result(x1,y1,x2,y2);
   return 0;
}
