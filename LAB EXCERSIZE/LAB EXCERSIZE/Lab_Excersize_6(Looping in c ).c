/*Write a C program to print numbers from 1 to 10 using all three types of loops
(while, for, do-while).*/
#include<stdio.h>
main()
{

	printf("----------While loop-----------\n");
	int i;
	i=1;
	while(i<=10)
	{
		printf("%d\n",i);
		i++;
	}
	printf("----------for loop-----------\n");
	
	for(i=1;i<=10;i++)
	{
		printf("%d\n",i);
	}
	printf("---------do-while----------\n");
	i=1;
	do
	{
		printf("%d\n",i);
		i++;
	}while(i<=10);
}