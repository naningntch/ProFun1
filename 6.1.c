#include <stdio.h>
#include <string.h>
char x[1000100];
int main ()
{
	int i,j;
	scanf("%s",x);
	int num = strlen(x);
	for(i=0; i<strlen(x); i++)
	{
		for(j=0; j<num; j++)
		{
			printf("%c",x[j]);
		}
		num--;
		printf("\n");
	}
	return 0;
}
