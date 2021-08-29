#include <stdio.h>
int main()
{
	int num,i,j;
	printf("Enter number : ");
	scanf("%d",&num);
	
	if(num%2 != 0)
	{
		for(i=1; i<=((num-1)/2); i++)
		{
			for(j=1; j<=((num+1)/2); j++)
			{
				printf("* ");
			}
				printf("\n");
	
			for(j=1; j<=((num+1)/2)-1; j++)
			{
				printf(" *");
			}
			
				printf("\n");
		}
		for(i=1; i<=((num+1)/2); i++)
				printf("* ");	
	}

	else 
	{
		for(i=1; i<=num/2; i++)
		{
			for(j=1; j<=(num/2)-1; j++)
			{
					printf("* ");
			}
				printf("*\n");
				
			for(j=1; j<=(num/2)-1; j++)
			{
					printf(" *");
			}
				printf(" *");
			
			if(i != num/2)	printf("\n");
		}
	}
}





