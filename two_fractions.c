//WAP to find the sum of two fractions.
#include<stdio.h>
struct fractions
{ 
 int a,b;
}; 
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
    printf("The sum of %d/%d and %d/%d is %d/%d \n",x.a,x.b,y.a,y.b,a/gcd(a,b),b/gcd(a,b));
    printf("\n");
}
int main()
{
    struct fractions x,y;
    printf("Enter the fraction 1:");
    scanf("%d%d",&x.a,&x.b);
    printf("\n Enter the second fraction:");
    scanf("%d%d",&y.a,&y.b);
    output(x,y);
    return 0;
}

