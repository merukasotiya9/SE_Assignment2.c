/*Write a C program that takes an integer input from the user and prints its multiplication
table using a for loop.*/
#include<stdio.h>
main()
{
	int n , i ;
	printf("\n\n\t Enter the Number = ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("\n\n\t %d * %d = %d",n,i,n*i);
	}
}
