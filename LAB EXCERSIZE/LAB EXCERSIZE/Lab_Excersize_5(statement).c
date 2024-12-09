/*Extend the program using a switch statement to display the month
name based on the user’s input (1 for January, 2 for February, etc.).*/
#include<stdio.h>
main()
{
	int month;
	printf("Enter any number : ");
	scanf("%d",&month);
	switch(month)
	{
		case 1 :printf("January");
				break;
		case 2 :printf("February");
				break;
		case 3 :printf("March");
				break;
		case 4 :printf("April");
				break;
		case 5 :printf("May");
				break;
		case 6 :printf("June");
				break;
		case 7 :printf("July");
				break;
		case 8 :printf("august");
				break;
		case 9 :printf("September");
				break;
		case 10 :printf("Octomber");
				break;
		case 11 :printf("November");
				break;
		case 12 :printf("December");
				break;
		default : printf("Invalid choice");
				
	}
}