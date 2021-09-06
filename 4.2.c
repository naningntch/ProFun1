#include <stdio.h>
int main ()
{
	int num, i, j, k, s;
	scanf("%d",&num);
	s=num;
	
	for(i=1; i<=num+(num-1); i=i+2) {
		for(k=1; k<=s-1; k++) {
			printf(" ");
		}
		
		for(j=1; j<=i; j++)	{
			printf("*");
		}
		printf("\n");
		s = s-1;
	}
	return 0;
}
