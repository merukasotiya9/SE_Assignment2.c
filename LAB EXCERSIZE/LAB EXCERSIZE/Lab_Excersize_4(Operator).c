/*Write a C program that accepts two integers from the user and performs
arithmetic, relational, and logical operations on them.*/

#include<stdio.h>
main()
{
	int n1,n2,n3,n4;
	printf("\n\nEnter first number : ");
	scanf("%d",&n1);
	printf("\n\nenter second number :");
	scanf("%d",&n2);
	
	//ARITHMETIC OPERATOR
	printf("\n\tAddition=%d\n",n1+n2);
	printf("\n\tsubstraction=%d\n",n1-n2);
	printf("\n\tmultiplication=%d\n",n1*n2);
	printf("\n\tdivision=%d\n",n1/n2);
	printf("\n module=%d\n",n1%n2);
	
	//RELATIONAL OPERATOR
	printf("\n\tgreater than value : %d\n",n1>n2);
	printf("\n\tless than value : %d\n",n1<n2);
	printf("\n\tgreater than & equal to value : %d\n",n1>=n2);
	printf("\n\tless than & equal to value : %d\n",n1<=n2);
	printf("\n\tequal to  : %d\n",n1==n2);
	printf("\n\tnot equal to value: %d\n",n1!=n2);
	
	//LOGICAL OPERATOR
	
	if(n1==n2&&n2==n1)//And operator
	{
		printf("value is same.\n\n");
	}
	else
	{
		printf("value is not same.\n\n");
	}
	
		if(n1==n2||n2==n1)// OR operator
	{
		printf("value is same.\n\n");
	}
	else
	{
		printf("value is not same.\n\n");
	}
	
		if(!(n1=n2))//not equal to operator
	{
		printf("value is same.\n\n");
	}
	else
	{
		printf("value is not same.\n\n");
	}
}