//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
struct Points
{
 int x,y;
};
struct Points inputa(struct Points a)
{
    printf("Enter point a");
    scanf("%d%d",&a.x,&a.y);
    return a;
}
struct Points inputb(struct Points b)
{
    printf("Enter point b");
    scanf("%d%d",&b.x,&b.y);
    return b;
}
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
 a=inputa(a);
 b=inputb(b);
 output(a,b);
 return 0;
}

