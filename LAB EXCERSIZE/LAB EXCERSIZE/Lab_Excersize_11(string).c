
/*Write a C program that takes two strings from the user and concatenates them
using strcat(). Display the concatenated string and its length using
strlen().*/
#include<stdio.h>
main()
{
	char str1[20],str2[20],str3[40];
	
	printf("enter the string = ");
	gets(str1);
	printf("enter the string = ");
	gets(str2);
	printf("\n\n\t STRING 1 = %s",str1);
	printf("\n\n\t STRING 2 = %s",str2);
	strcpy(str3,strcat(str1,str2));
	printf("\n\n\t concat of strings =  %s",str3);
	
	printf("\n\n\t length of strings = %d",strlen(str3));
	
}