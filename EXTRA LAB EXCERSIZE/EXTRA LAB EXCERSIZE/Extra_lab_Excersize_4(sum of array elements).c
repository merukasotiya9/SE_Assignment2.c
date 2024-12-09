/*Write a C program that takes N numbers from the user and stores them in an array. The
program should then calculate and display the sum of all array elements.
	Challenge: Modify the program to also find the average of the numbers.*/
	
#include<stdio.h>
main()
{
	int arr[50] , size , i , sum=0 , average;
	
	printf("\n\n\t Enter size of array = ");
	scanf("%d",&size);
	printf("\n____________________________________________________\n");
	for(i=0;i<size;i++)
	{
		printf("\n\n\t arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	printf("\n____________________________________________________\n");
	for(i=0;i<size;i++)
	{
		printf("\n\n\t arr[%d] = %d",i,arr[i]);
		
	}
	printf("\n____________________________________________________\n");

	for(i=0;i<size;i++)
	{
		sum=sum+arr[i];
		average=sum/size;
	}
		printf("\n sum of element = %d",sum);
		printf("\n average of elemnet = %d",average);

}

