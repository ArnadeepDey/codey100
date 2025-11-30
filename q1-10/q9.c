#include<stdio.h>
#include<math.h>
void main()
{
	int prin,rate,time;
		printf("Enter the principal,rate and time\n");
		scanf("%d",&prin);
		scanf("%d",&rate);
		scanf("%d",&time);
		printf("The Simple Interest is = %f\n",(prin*rate*time)/100.0);
		printf("The Compound Interest is = %f\n",prin*pow((1+rate/100.0),time)-prin);
	}