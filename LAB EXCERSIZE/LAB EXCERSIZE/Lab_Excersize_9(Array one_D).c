/*Write a C program that stores 5 integers in a one-dimensional array and prints
them. Extend this to handle a two-dimensional array (3x3 matrix) and
calculate the sum of all elements.*/
//Write a C program that stores 5 integers in a one-dimensional array and prints them.
#include<stdio.h>
main()
{
	int arr[20],i,size;
	printf("\n\n\tEnter size of Array = ");
	scanf("%d",&size);
	
	for(i=0;i<=size;i++)
	{
		printf("\n\n\tEnter Number of Array arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=size;i++)
	{
		printf("\n\n\t arr[%d] = %d",i,arr[i]);
	}
}