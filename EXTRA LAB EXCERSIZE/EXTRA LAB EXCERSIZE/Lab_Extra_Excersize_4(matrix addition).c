/*Write a C program that accepts two 2x2 matrices from the user and adds them. Display the
resultant matrix.
Challenge: Extend the program to work with 3x3 matrices and matrix multiplication.*/
#include<stdio.h>
main()
{
	int  r , c , m1[2][2] , m2[2][2] , sum[2][2];
	printf("_______________MATRIX 1_____________________\n");

	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("\n\n\t Enter  number of m1[%d][%d] = ",r,c);
			scanf("%d",&m1[r][c]);
		}
	}
		printf("_______________MATRIX 2_____________________\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("\n\n\t Enter number of  m2[%d][%d] = ",r,c);
			scanf("%d",&m2[r][c]);
		}
	}
		printf("_______________MATRIX 1_____________________\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf(" %d",m1[r][c]);
		}
		printf("\n");
	}
		printf("_______________MATRIX 2_____________________\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf(" %d",m2[r][c]);
		}
		printf("\n");
	}
	
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			sum[r][c]=m1[r][c]+m2[r][c];
		}
	}
		printf("_______________Resultant  MATRIX_____________________\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf(" %d",sum[r][c]);	
		}
		printf("\n");
	}
		
}



//Challenge: Extend the program to work with 3x3 matrices and matrix multiplication.

#include<stdio.h>
main()
{
		int  r , c , m1[3][3] , m2[3][3] , m3[3][3] , k;
	printf("_______________MATRIX 1_____________________\n");

	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("\n\n\t Enter  number of m1[%d][%d] = ",r,c);
			scanf("%d",&m1[r][c]);
		}
	}
		printf("_______________MATRIX 2_____________________\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("\n\n\t Enter number of element m2[%d][%d] = ",r,c);
			scanf("%d",&m2[r][c]);
		}
	}
		printf("_______________MATRIX 1_____________________\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d",m1[r][c]);
		}
		printf("\n");
	}
		printf("_______________MATRIX 2_____________________\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d",m2[r][c]);
		}
		printf("\n");
	}
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			m3[r][c]=0;
			for(k=0;k<3;k++)
			{
				//m3[r][c]=m3[r][c]+(m1[r][k]*m2[k][c]);
				m3[r][c]+=m1[r][k]*m2[k][c];
			}
		}
	}
		printf("_______________Resultant  MATRIX_____________________\n");

	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d",m3[r][c]);
		}
		printf("\n");
	}
	
}








