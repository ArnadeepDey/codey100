#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter two sides of a Rectangle\n");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("The Area = %d, Perimeter = %d\n",a*b,2*(a+b));
}