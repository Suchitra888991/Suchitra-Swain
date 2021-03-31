//WAP to find the sum of n fractions.
#include<stdio.h>
struct sum
{
    int numerator, denominator;
};
typedef struct sum sum;

struct fractions
{
    sum sum;
    int k;
    int numerator[100];
    int denominator[100];
};
typedef struct fractions fractions;

int gcd(int , int );

void output(fractions sum);

fractions input_one_fraction()
{
    fractions a;
    scanf("%d", &a.k);
    for(int i=0;i<a.k;i++)
    {
        scanf("%d%d", &a.numerator[i], &a.denominator[i]);
    }
    return a;
}

void input_n_fractions(int n, fractions a[n])
{
    for(int i = 0; i < n ; i++)
    {
        a[i] = input_one_fraction();
    }
}

int gcd(int num, int den)
{
	int gcd =1;
	for(int i=2;i<=num && i<=den;i++)
	{
		if(num%i == 0 && den%i ==0)
		{
			gcd=i;
		}
	}
	return gcd;
}

void compute_two_fractions(int n, fractions *a)
{
    a->sum.numerator = 0;
    a->sum.denominator = a->denominator[0];
    for(int i = 0; i < a->k ; i++)
    {
        a->sum.denominator = a->denominator[i] * a->sum.denominator;
    }
    
    for(int i = 0; i < a->k ; i++)
    {
        a->sum.numerator = a->sum.numerator + (a->numerator[i]) * (a->sum.denominator/a->denominator[i]);
    }
    
    int hcf = gcd(a->sum.numerator, a->sum.denominator);
    a->sum.numerator = a->sum.numerator / hcf;
    a->sum.denominator = a->sum.denominator / hcf;
}

void compute_n_fractions(int n, fractions a[n])
{
    for(int i=0 ; i<n ; i++)
    {
        compute_two_fractions(n, &a[i]);
    }
}

void print_one_fraction(fractions frac)
{
    for(int i=0 ; i<frac.k ; i++)
    {
        printf("%d/%d + ", frac.numerator[i], frac.denominator[i]);
    }
    printf("= %d/%d\n", frac.sum.numerator, frac.sum.denominator);
}

void print_n_fractions(int n, fractions a[n])
{
    for(int i=0 ; i<n ; i++)
    {
        print_one_fraction(a[i]);
    }
}

int main()
{
    fractions a[100];
    int n;
    scanf("%d", &n);
    input_n_fractions(n, a);
    compute_n_fractions(n, a);
    print_n_fractions(n, a);
    return 0;
}

