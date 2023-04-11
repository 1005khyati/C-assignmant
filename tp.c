#include<stdio.h>
void main()
{
	int i,j,a;
	printf("Enter a number :");
	scanf("%d",&a);
	for(i=0;i<=a;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("\t%d",i);
			
		}
		printf("\n");
	}
}
