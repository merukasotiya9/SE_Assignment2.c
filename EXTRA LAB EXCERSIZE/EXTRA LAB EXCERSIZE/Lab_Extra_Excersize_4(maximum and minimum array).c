/*Write a C program that accepts 10 integers from the user and stores them in an array. The
program should then find and print the maximum and minimum values in the array.
Challenge: Extend the program to sort the array in ascending order.*/
#include<stdio.h>
main()
{
	int arr[20] , n ,i ,j, max=0 , min=arr[0],temp,m;
	printf("\n\n\tEnter the N value =  ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n\n\tEnter Element of Array arr[%d] =",i);
		scanf("%d",&arr[i]);
	} 
	 printf("-----------------before sorting----------------------------\n");
	 for(i=0;i<n;i++)
	{
	 printf("\n\n\t arr[%d] = %d",i,arr[i]);
	}
	 
	printf("\n------------------------MAXIMUM--------------------------");

	 for(i=0;i<n;i++)
	{
	 	if(max<arr[i])
	 	{
	 		max=arr[i];	
		}
	}
	  printf("\n\n\t Maximum Values in the Array = %d",max);
	  
	printf("\n------------------------MINIMUM--------------------------\n");
	for(i=0;i<n;i++)
	{
	 	if(arr[i]<min)
		{
			min=arr[i];	
	 	}
	}
	  	printf("\n\n\t Minimum Values in the Array =%d",min);
	  	
	  	printf("\n-------------------------After Sorting---------------------------");
	  	for(i=0;i<n;i++)
	  	{
	  		for(j=i+1;j<n;j++)
	  		{
	  			if(arr[i]>arr[j])
	  			{
	  			temp=arr[i];
	  			arr[i]=arr[j];
	  			arr[j]=temp;
				}
			}
			  printf("\n\n arr[%d] = %d",i , arr[i]);
		}
		  
}
