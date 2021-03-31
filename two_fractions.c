//WAP to find the sum of two fractions.
#include<stdio.h>
struct fractions
{
 int numerator,denominator;
};

void output(struct fractions x, struct fractions y, struct fractions z);

struct fractions input()
{
   struct fractions x;
   scanf("%d%d",&x.numerator,&x.denominator);
   return x;
}

int gcd(int a, int b)
{
   int gcd;
   for(int i=2;i<=a && i<=b; ++i)
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
    return c;
}

void output(struct fractions x, struct fractions y, struct fractions z)
{
    printf("The sum of %d/%d and %d/%d is %d/%d \n",x.numerator,x.denominator, y.numerator,y.denominator, z.numerator,z.denominator);
}

int main()
{
    struct fractions x,y,z;
    printf("Enter the fraction 1:");
    x = input();
    printf("Enter the fraction 2:");
    y = input();
    z = addition(x, y);
    output(x,y,z);
    return 0;
}

