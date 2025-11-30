#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter two numbers\n");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("Sum = %d, Difference = %d, Product = %d, Quotient = %d",a+b,a-b,a*b,a/b);
}