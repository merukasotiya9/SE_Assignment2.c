/*Write a C program that takes an integer from the user and calculates the sum of its digits
using a while loop.
 Challenge: Extend the program to reverse the digits of the number*/
#include<stdio.h>
main()
{
	int num , i , sum=0;
	printf("\n\n\tEnter Any One Number = ");
	scanf("%d",&num);
	i=num;
	while(i>=1)
	{
		printf("%d ",i);
		sum=sum+i;
		i--;
	}
		printf("\n%d ",sum);

}