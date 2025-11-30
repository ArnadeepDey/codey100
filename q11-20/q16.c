#include<stdio.h>
void main()
{
	float a,b,c;
	printf("Enter three numbers:\n");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	if(a>b&&a>c)
	{
		printf("the largest number is %.2f\n",a);
	}
	else if(b>a&&b>c)
	{
			printf("the largest number is %.2f\n",b);
	}
	else
	printf("the largest number is %.2f\n",c);
}