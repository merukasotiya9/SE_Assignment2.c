/*Write a C program to demonstrate pointer usage. Use a pointer to modify the
value of a variable and print the result.*/
#include <stdio.h>
main() 
{
    int num = 10;      
    int *ptr=&num;        

    printf("Before modification: num = %d\n", num); 

    *ptr = 20;         

    printf("After modification: num = %d\n", num);   

}