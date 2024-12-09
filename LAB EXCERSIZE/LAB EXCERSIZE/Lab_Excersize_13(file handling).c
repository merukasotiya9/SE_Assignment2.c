/*Write a C program to create a file, write a string into it, close the file, then
open the file again to read and display its contents.*/
#include <stdio.h>


void main() 
{
    FILE *fp;
	
	fp=fopen("example.txt", "w");
    
    
    if (fp == NULL) 
	{
        printf("Could not open file\n");
	}

    char *str = "This is my file created by C in file hadling.";
    fputs(str, fp);

    fclose(fp);

    fp = fopen("example.txt", "r");
    if (fp == NULL)
	{
        printf("Could not open file\n");
        exit(1);
    }

    char data[100];
    while (fgets(data, 100, fp) != NULL)
	{
   	    printf("%s", data);
    }

    fclose(fp);
}


