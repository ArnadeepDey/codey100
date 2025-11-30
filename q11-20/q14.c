#include<stdio.h>
#include<ctype.h>
void main()
{
	int alp;
	printf("Enter any alphabet\n");
	scanf("%c",&alp);
	alp= tolower(alp);
	if(alp>='a'&& alp<='z')
	{
		if(alp=='a'||alp=='e'||alp=='i'||alp=='o'||alp=='u')
		printf("The Alphabet is a Vowvel\n");
		else
		printf("The Alphabet is a Consonent\n");
	}
	else("Invalid Input");
}