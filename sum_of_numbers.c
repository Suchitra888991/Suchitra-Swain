//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int Sum(int a[], int n)
{
    int sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum = sum + a[i];
	}
	return sum;
}
int input(int a[], int n)
{
    
    for(int i = 0 ; i < n ; i++)
	{
		scanf("%d", &a[i]);
	}
	
}
void output(int a[], int n)
{
   printf("The sum of %d different numbers is %d.\n", n, Sum(a,n)); 
}
int main()
{
	int a[100], n;
	printf("Enter the number of integers to be added: ");
	scanf("%d", &n);
	
	printf("Enter the integers: ");
	a[100]=input(a, n);
	output(a,n);
	return 0;
}
