#include <stdio.h>
int main ()
{
	int i,j,num;
	printf("Enter number : ");
	scanf("%d",&num);
	
	for (i=1; i<=num; i++)
		{
			for(j=1; j<=num; j++)
				{
					if(i%2==1 && j%2==1)
					{
						printf("*");
					}
					else if (i%2==1 && j%2==0)
					{
						printf(" ");
					}
					
					if(i%2==0 && j%2==0)
					{
						printf("*");
					}
					
					else if (i%2==0 && j%2==1)
					{
						printf(" ");
					}
					
				}
				printf("\n");
				
		}
		
	return 0;
}


