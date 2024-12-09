/*Write a C program that takes a string as input and reverses it using a function.
Challenge: Write the program without using built-in string handling functions*/
#include <stdio.h>
void reverseString(char str[]) 
{
    int length = 0, i;
    char temp;
	
	while (str[length] != '\0') 
	{
        length++;
    }

    
    for (i = 0; i < length / 2; i++) 
	{
       
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

int main()
{
    char str[100];
	printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    int length = 0;
    while (str[length] != '\0') 
	{
        length++;
    }
    if (str[length - 1] == '\n') 
	{
        str[length - 1] = '\0'; 
    }
	reverseString(str);
	printf("Reversed string: %s\n", str);
	return 0;
}
