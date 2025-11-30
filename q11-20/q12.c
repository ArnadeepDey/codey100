#include<stdio.h>
void main()
{
	int a;
	printf("Enter a number\n");
	scanf("%d",&a);
	if(a>=0)
	{
		if(a==0)
		printf("Number is Zero\n");
		else
		printf("Number is Positive\n");
	}
	else
	printf("Number is Negetive\n");
}