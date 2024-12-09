#include<stdio.h>
struct stu_info
{
	char stu_name[20];
	int roll_no;
	int sub[3];
	int mark;
		
}s[3];
main()
{
	int i , k;
	for(i=0;i<3;i++)
	{
		printf("______________________STUDENT [%d]_______________________\n",i+1);
		
		printf("\n\n\t Enter Student Name[%d] = ",i+1);
		scanf("%s",&s[i].stu_name);
		printf("\n\n\t Enter Student Roll No =");
		scanf("%d",&s[i].roll_no);
		
	
		for(k=0;k<3;k++)
		{
			printf("\n\n\t Enter Mark of Student = ");
			scanf("%d",&s[i].sub[k]);	
		}
	}

	for(i=0;i<3;i++)
	{
		printf("\n______________________STUDENT [%d]________________________\n",i+1);
		
		printf("\n\n\t Student name = %s",s[i].stu_name);
		printf("\n\n\t Roll No = %d",s[i].roll_no);
			for(k=0;k<3;k++)
			{
				printf("\n\n\t Mark= %d",s[i].sub[k]);
			}
	}
}
