//Leap year
#include<stdio.h>
int main()
{
	int year;
	printf("\nEnter the year :");
	scanf("\n%d",&year);
	if(year%4==0)
	{
		printf("\nLeap year");
	}
	else
	{
		printf("\nNot a leap year");
	}
}
