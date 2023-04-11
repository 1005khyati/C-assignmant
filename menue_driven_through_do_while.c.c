//Real time passa);
#include<stdio.h>
void main()
{
	int input,breakfast;
	int again;
	printf("\nMenu :");
	printf("\n     1 -- >> coffee ");
	printf("\n     2 -- >> tea ");
	printf("\n     3 -- >> breakfast ");
	do
	{
		printf("\nEnter a key : ");
		scanf("%d",&input);
		if(input==1)
		{
			printf("\nYou have selected Coffee");
		}
		else if(input==2)
		{
			printf("\nYou have selected Tea");
		}
		else if(input>3)
		{
			printf("\nWe are sorry but we only have 3 items available");
		}
		else if(input==3)
		{
			printf("\nYou have selected Breakfast");
			printf("\nBreakfast menue : ");
			printf("\n       1. Samosa");
			printf("\n       2. Puff");
			printf("\n       3. Paratha");
			printf("\n       4. Sandwitch");
			printf("\nEnter the key for breakfast :");
			scanf("%d",&breakfast);
			switch(breakfast)
			{
				case 1:printf("\nYou have selected Samosa");
					   break;
				case 2:printf("\nYou have selected Puff");
					   break;
				case 3:printf("\nYou have selected Paratha");
					   break;
				case 4:printf("\nYou have selected Sandwitch");
					   break;
				default:printf("\nWe are sorry but we only have 4 item available");
					   break;
			}
		}
		printf("\nDo you want to continue ? 0/1 :");
		scanf("%i",&again);
		
	}
		
	
	while(again==0);
	{
		printf("\nThank you for Order and patience");
		
	}
}
