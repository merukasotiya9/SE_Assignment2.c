//Whether the number is even or odd.
#include<stdio.h>
main()
{
	int num;
	printf("\nenter any number = ");
	scanf("%d",&num);
	 
	 if(num%2==0)
	 {
	 	printf("number is Even.");
	 }
	 else
	 {
	 	printf("numbe is Odd.");
	 }
}
	//Whether the number is positive, negative, orzero.


#include<stdio.h>
main()
{
	int num;
	printf("\nenter any number = ");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("Number is Positive.");
	}
	else if(num<0)
	{
		printf("Number is negative.");
	}
	else
	{
		printf("Number is Zero");	
	}
}
//Whether the number is a multiple of both 3 and 5.
#include<stdio.h>
main()
{
	int num;
	printf("\n Enter any number = ");
	scanf("%d",&num);
	if(num%3==0&&num%5==0)
	{
		printf("yes number is multiple by 3 and 5");
	}
	else
	{
		printf("No number is not multiple by 3 and 5");
	}
	
}












