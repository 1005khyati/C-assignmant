#include<stdio.h>
void binarysearch()
{
	int arr[5],N,K,i;
	for(i=0;i<5;i++)
	{
		printf("\nEnter the array : ");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf(" %d",arr[i]);
	}
	printf("\nEnter any number N : ");
	scanf("%d",&N);
	printf("\nEnter any number K : ");
	scanf("%d",&K);
	for(i=0;i<5;i++)
	{
	
		if(K!=arr[i])
		{
			printf("\n -1");
		}
		else
		{
			printf("present");
			printf("\n Index of %d is : %d",K,i-1);
		}
	}
}
void main()
{
	int arr[5],N,K;
	binarysearch();
}
