#include<stdio.h>
#include<conio.h>
main()
{
	int m;
	printf("\n Enter your marks:");
	scanf("%d",&m);
	if(m==100 && m<=85)
	{
		printf("\n Grade A",m);
	}
	else if(m<85 && m<=70)
	{
		printf("\n Grade B");
	}
	else if(m<70 && m<=55)
	{
			printf("\n Grade C");
	}
	else if(m<55 && m<=40)
	{
			printf("\n Grade D");
	}
	else
	{
			printf("\n Grade F");
	}
	
}
