//WAP to find the sum of two fractions.
#include<stdio.h>
struct fractions
{ 
 int numerator,denominator;
};
struct fractions input1(struct fractions x)
{
   printf("Enter the fraction 1:");
   scanf("%d%d",&x.numerator,&x.denominator);
   return x;
}
struct fractions input2(struct fractions y)
{
   printf("Enter the fraction 2:");
   scanf("%d%d",&y.numerator,&y.denominator);
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
    int numerator=(x.numerator*y.denominator)+(x.denominator*y.numerator);
    int denominator=x.denominator*y.denominator;
    int cf=gcd(numerator,denominator);
    printf("The sum of %d/%d and %d/%d is %d/%d \n",x.numerator,x.denominator,y.numerator,y.denominator,numerator/cf,denominator/cf);
 }
int main()
{
    struct fractions x,y;
    x = input1(x);
    y = input2(y);
    output(x,y);
    return 0;
}

