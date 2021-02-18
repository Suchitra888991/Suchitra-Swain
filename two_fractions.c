//WAP to find the sum of two fractions.
#include<stdio.h>
struct fractions
{
 int numerator,denominator;
};

void output(struct fractions x, struct fractions y, struct fractions z);

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

struct fractions addition(struct fractions x, struct fractions y)
{
    struct fractions c;
    int numerator=(x.numerator*y.denominator)+(x.denominator*y.numerator);
    int denominator=x.denominator*y.denominator;
    int cf=gcd(numerator,denominator);
    c.numerator = numerator/cf;
    c.denominator = denominator/cf;
    output(x, y, c);
}

void output(struct fractions x, struct fractions y, struct fractions c)
{
    printf("The sum of %d/%d and %d/%d is %d/%d \n",x.numerator,x.denominator,y.numerator,y.denominator,c.numerator,c.denominator);
}

int main()
{
    struct fractions x,y;
    x = input1(x);
    y = input2(y);
    addition(x,y);
    return 0;
}

