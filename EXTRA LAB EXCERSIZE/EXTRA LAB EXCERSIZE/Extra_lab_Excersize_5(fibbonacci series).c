/*Write a C program that generates the Fibonacci sequence up to N terms using a recursive
function.
Challenge: Modify the program to calculate the Nth Fibonacci number using both iterative
and recursive methods. Compare their efficiency.*/
#include<stdio.h>

int fibonacci(int);

main()
{
	int n;
	
	printf("enter the n:");
	scanf("%d",&n);
	
	int i;
	for(i=0;i<n;i++)
	{
		printf(" %d",fibonacci(i));
	}	

}

int fibonacci(int n)
{
	
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}
