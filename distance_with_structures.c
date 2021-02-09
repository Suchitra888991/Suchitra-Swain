//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
struct Points
{
 int x,y;
};
 float distance(struct Points a, struct Points b)
{
 float result = sqrt((a.x - b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
 return result;
}
void output(struct Points a, struct Points b)
{
 printf("The distance is %f \n",distance(a,b));
}
int main()
{
 struct Points a,b;
 printf("Enter point a");
 scanf("%d%d",&a.x,&a.y);
 printf("Enter point b");
 scanf("%d%d",&b.x,&b.y);
 output(a,b);
 return 0;
}
