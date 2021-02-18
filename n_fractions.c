//WAP to find the sum of n fractions.
#include<stdio.h>
struct fractions
{
    int numerator, denominator;
};
typedef struct fractions f;

int gcd(int , int );
void output(struct fractions sum);

struct fractions* input(struct fractions a[], int n)
{
    for(int i = 0; i < n ; i++)
    {
        printf("Enter fraction %d:", i+1);
        scanf("%d%d", &a[i].numerator, &a[i].denominator);
    }
    return a;
}

struct fractions* addition(struct fractions a[], int n)
{
    f sum;
    sum.numerator = 0;
    sum.denominator = a[0].denominator;
    for(int i = 0; i < n ; i++)
    {
        sum.denominator = ((a[i].denominator * sum.denominator) / (gcd(a[i].denominator, sum.denominator)));
    }
    
    for(int i = 0; i < n ; i++)
    {
        sum.numerator = sum.numerator + (a[i].numerator) * (sum.denominator/a[i].denominator);
    }
    
    int hcf = gcd(sum.numerator, sum.denominator);
    sum.numerator = sum.numerator / hcf;
    sum.denominator = sum.denominator / hcf;
    output(sum);
}

void output(f sum)
{
    printf("The sum is %d/%d\n", sum.numerator, sum.denominator);
}

int main()
{
    f a[100];
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    input(a, n);
    addition(a, n);
    return 0;
}

int gcd(int a, int b)
{
    if(a == 0)
        return b;
    else
        return gcd(b%a, a);
}
