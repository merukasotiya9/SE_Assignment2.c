/*Write a C program that takes three numbers from the user and determines:
o The largest number.
o The smallest number*/
#include<stdio.h>
main()
{
	int num1 , num2 , num3;
	printf("\n\n\tEnter First Number =");
	scanf("%d",&num1);
	printf("\n\n\tEnter Second Number =");
	scanf("%d",&num2);
	printf("\n\n\tEnter Third Number =");
	scanf("%d",&num3);
	if(num1>num2 || num2>num3 || num3>num1)
	{
		printf("\nlargest number of = %d ");
	}
	else 
	{
		printf("All number are same\n ");
	}
	if(num1<num2 || num2<num3 || num3<num1)
	{
		printf("\nsmallest number of  =%d");
	}
	else 
	{
		printf("\nAll the number are same ");
	}
}