/*Write a C program to check if a number is even or odd using an if-else
statement.*/
#include<stdio.h>
main()
{
	int num;
	printf("Enter any Number =");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("Number is Even.");
	}
	else
	{
		printf("Number is Odd.");
	}
} 