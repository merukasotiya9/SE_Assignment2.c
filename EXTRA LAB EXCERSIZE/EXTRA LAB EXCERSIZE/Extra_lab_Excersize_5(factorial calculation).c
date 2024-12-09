/*Write a C program that calculates the factorial of a given number using a function.
Challenge: Implement both an iterative and a recursive version of the factorial function and
compare their performance for large numbers*/
#include<stdio.h>
int factorial(int);
main()
{
	int num , f;
	printf("\tEnter Any number = ");
	scanf("%d",&num);
	f=factorial(num);
	printf("\n\n\t factorial of = %d",f);	
}
int factorial(int num)
{
	if(num==0)
	{
		return 1;
	}
	else
	{
		return num*(factorial(num-1));
	}
	
}