#include<stdio.h>
int main()
{
	int Marks;
	printf("Enter Marks:");
	scanf("%d",&Marks);
	if(Marks<0||Marks>100)
	{
		printf("Invalid Input please enter any number between 0-100\n");
	}
	else if(Marks>=90)
	{
		printf("Grade A\n");
	}
	else if(Marks>=80&&Marks<90)
	{
		printf("Grade B\n");
	}
	else if(Marks>=70&&Marks<80)
	{
		printf("Grade C\n");
	}
	else if(Marks>=60&&Marks<70)
	{
		printf("Grade D\n");
	}
	else
	{
	printf("Grade F\n");
	}
}