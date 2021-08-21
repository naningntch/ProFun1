#include <stdio.h>
int main()
{
	int num, i=1, j;
	printf("Enter number : ");
	scanf("%d", &num);
	while (i<=num)
		{
			j=1;
			while (j<=num)
				{
					printf("*");
					j++;
				}
				printf("\n");
				i++;
		}
		
		return 0;
}
