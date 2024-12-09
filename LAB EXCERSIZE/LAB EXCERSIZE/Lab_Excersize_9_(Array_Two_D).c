/*Extend this to handle a two-dimensional array (3x3 matrix) and
calculate the sum of all elements.*/
#include<stdio.h>
main()
{
	int r , c , m1[3][3],m2[3][3],m3[3][3];
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("\n\n\t Enter the Elment m1[%d][%d]=",r,c);
			scanf("%d",&m1[r][c]);
		}
	}
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("\n\n\t Enter the Elment m2[%d][%d]=",r,c);
			scanf("%d",&m2[r][c]);
		}
	}
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%d",m1[r][c]);
		}
		printf("\n");
	}
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%d",m2[r][c]);
		}
		printf("\n");
	}
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			m3[r][c]=m1[r][c]+m2[r][c];
			printf("%d",m3[r][c]);
		}
		printf("\n");
	}

	
}