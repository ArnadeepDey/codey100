#include<stdio.h>
void main()
{
	int intsec,hrs,mins,secs;
		printf("Enter time in seconds\n");
		scanf("%d",&intsec);
		hrs=intsec/3600;
		mins=(intsec %3600)/60;
		secs= intsec %60;
		printf("%d: %d: %d",hrs,mins,secs);
	}