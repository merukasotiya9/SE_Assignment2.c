/*Write a C program that takes the marks of a student as input and displays the corresponding
grade based on the following conditions:
o Marks > 90: Grade A
o Marks > 75 and <= 90: Grade B
o Marks > 50 and <= 75: Grade C
o Marks <= 50: Grade D
? Use if-else or switch statements for the decision-making process.*/
#include<stdio.h>
main()
{
	int mark;
  	printf("\n Enter your marks : ");
  	scanf("%d",&mark);
  	
  	if(mark>90)
  	{
  		printf("Grade A");
	}
	else if(mark>75&&mark<=90)
	{
		printf("Grade B");
	}
	else if(mark>50&&mark<=75)
	{
		printf("Grade C");
	}
	else if(mark>=33&&mark<=50)
	{
		printf("Grade D");
	}
	else
	{
		printf("failed !");
	}
}