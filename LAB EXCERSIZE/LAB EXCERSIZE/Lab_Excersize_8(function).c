/*Write a C program that calculates the factorial of a number using a function.
Include function declaration, definition, and call.*/
#include<stdio.h>
int factorial();
main()
{
	int fact=factorial();
	printf("\n\n\t factorial = %d",fact);
}
int factorial()
{
	int n , i , fact=1;
	printf("Enter any number = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}