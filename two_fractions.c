//WAP to find the sum of two fractions.
#include<stdio.h>
struct fractions
{ 
 int a,b;
};
struct fractions input1(struct fractions x)
{
   printf("Enter the fraction 1:");
   scanf("%d%d",&x.a,&x.b);
   return x;
}
struct fractions input2(struct fractions y)
{
   printf("Enter the fraction 2:");
   scanf("%d%d",&y.a,&y.b);
   return y;
}
int gcd(int a, int b)
{ 
   int gcd;
   for(int i=1;i<=a && i<=b; ++i)
   { 
      if(a%i==0 && b%i==0)
         { 
 	gcd=i;
          }
     }
    return gcd;
}
void output(struct fractions x, struct fractions y)
{
    int a=(x.a*y.b)+(x.b*y.a);
    int b=x.b*y.b;
    int cf=gcd(a,b);
    printf(“The sum of %d/%d and %d/%d is %d/%d \n”,x.a,x.b,y.a,y.b,a/cf,b/cf);
 }
int main()
{
    struct fractions x,y;
    x = input1(x);
    y = input2(y);
    output(x,y);
    return 0;
}
