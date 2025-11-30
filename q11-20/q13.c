#include<stdio.h>
void main()
{
	int year;
	printf("Enter a year: ");
	scanf("%d",&year);
	if(year%400==0)
	printf("Leap year\n");
	else if(year%100==0)
	printf("Not a Leap year\n");
	else if(year%4==0)
	printf("Leap year\n");
	else
	printf("Not a Leap year\n");
}