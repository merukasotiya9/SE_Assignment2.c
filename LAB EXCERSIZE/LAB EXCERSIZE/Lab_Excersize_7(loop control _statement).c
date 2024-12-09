/*Write a C program that uses the break statement to stop printing numbers
when it reaches 5. Modify the program to skip printing the number 3 using the
continue statement*/
#include<stdio.h>
main()
{
	int i;
	printf("-----------break statement--------------\n");
	for(i=1;i<=10;i++)
	
		{
		if(i==6)
			break;
			printf("%d\n",i);
		}
		
	//CONTINOUE STATEMENT 
	printf("---------continue statement------------\n");
	for(i=1;i<=10;i++)
	{
		if(i==3)
			continue;
			printf("%d\n",i);
	}
}