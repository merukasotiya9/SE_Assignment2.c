/*Write a C program that acts as a simple calculator. The program should take two numbers
and an operator as input from the user and perform the respective operation (addition,
subtraction, multiplication, division, or modulus) using operators.*/
#include<stdio.h>
main()
{
	int num1,num2;
	printf("\n\t enter first number = ");
	scanf("%d",&num1);
	printf("\n\t enter second number = ");
	scanf("%d",&num2);
	
	printf("\n addtion=%d",num1+num2);
	printf("\n substraction=%d",num1-num2);
	printf("\n multiplication=%d",num1*num2);
	printf("\n division=%d",num1/num2);
	printf("\n module=%d",num1%num2);
}