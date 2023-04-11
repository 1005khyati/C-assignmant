//WAP to find area of triangle , circle and rectangle using switch case
#include<stdio.h>
void main()
{
	float h,b,r,len,bre,hei;
	int casee;
	printf("Enter the number :");
	scanf("%d",&casee);
	switch(casee)
	{
		case 1:printf("Enter the height of triangle : ");
			   scanf("%f",&h);
			   printf("\nEnter the base of triangle : ");
			   scanf("%f",&b);
			   printf("\nArea of triangle is : %f",(h*b)/2);
			   break;
		case 2:printf("Enter the radius of circle : ");
			   scanf("%f",&r);
			   printf("\nArea of circle : %f",3.14*r*r);
			   break;
		case 3:printf("Enter the height of rectangle : ");
			   scanf("%f",&hei);
			   printf("\nEnter the width of rectangle : ");
			   scanf("%f",&bre);
			   printf("\nEnter the length of rectangle : ");
			   scanf("%f",&len);
			   break;
			   
	}
}
