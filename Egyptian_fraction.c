#include<stdio.h>
struct fractions
{
	int numerator;
	int denominator;
};
typedef struct fractions fractions;

struct egyptian_fraction{
	int k;
	int denominator[100];
	fractions sum;
};
typedef struct egyptian_fraction egyptian;

egyptian input_one_fraction()
{
	egyptian e;
	scanf("%d",&e.k);
	for(int i=0;i<e.k;i++)
	{
		scanf("%d",&e.denominator[i]);
	}
	return e;
}
void input_n_fractions(int n,egyptian frac[n])
{
	for(int i=0;i<n;i++)
	{
		frac[i]=input_one_fraction();
	}
}

void compute_one_fraction(egyptian *p)
{
    p->sum.numerator=0;
    p->sum.denominator=p->denominator[0];
	for(int i=0;i<p->k;i++)
	{
		p->sum.denominator=p->sum.denominator * p->denominator[i];

    }
    for(int i=0;i<p->k;i++)
    {
        p->sum.numerator=p->sum.numerator+(1*(p->sum.denominator/p->denominator[i]));
    }
    int factor=gcd(p->sum.numerator,p->sum.denominator);
    p->sum.numerator=p->sum.numerator/factor;
    p->sum.denominator=p->sum.denominator/factor;
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

void compute_n_fractions(int n, egyptian e[n])
{
	for(int i=0;i<n;i++)
	{
		compute_one_fraction(&e[i]);
	}
}

void print_one_fraction(egyptian frac)
{
	for(int i=0;i<frac.k;i++)
	{
		printf("%d/%d + ", 1, frac.denominator[i]);
	}
	printf("= %d/%d\n", frac.sum.numerator, frac.sum.denominator);
}

void print_n_fractions(int n, egyptian e[n])
{
	for(int i=0;i<n;i++)
	{
		print_one_fraction(e[i]);
	}
}

int main()
{
	egyptian ef[100];
	int n;
	scanf("%d", &n);
	input_n_fractions(n,ef);
	compute_n_fractions(n,ef);
	print_n_fractions(n,ef);
	return 0;
}


