//Score
#include<stdio.h>
int main()
{
	int score;
	printf("\nEnter your score:");
	scanf("%d",&score);
	if(score<100 && score>=90)
	{
		printf("\nGrade A");
	}
	   else if(score<90 && score>=80)
	   {
	   	printf("\nGrade B");
	   }
	   else if(score<80 && score>=70)
	   {
	   	printf("\nGrade C");
	   }
	   else if(score<70 && score>=60)
	   {
	   	printf("\nGrade D");
	   }
	   else if(score<60 && score>=50)
	   {
	   	printf("\nGrade E");
	   }
	   else if(score<500)
	   {
	   	printf("\nFail");
	   }
}
