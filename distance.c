#include<stdio.h>
#include<math.h>
void input()
{
    int x1, y1, x2, y2;
    printf("Enter point 1: ");
    scanf("%d%d", &x1&y1);
    printf("Enter point 2: ");
    scanf("%d%d", &x2,&y2);
    output(x1, y1, x2, y2);
}
float distance(int x1, int y1, int x2, int y2)
{
 float dist = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
 return dist;
}

void output(int x1, int y1, int x2, int y2)
{
 printf("The distance between %d, %d and %d, %d is %f.\n", x1, y1, x2, y2, distance(x1,y1,x2,y2));
}

int main()
{
 input();
 return 0;
}
