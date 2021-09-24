#include <stdio.h>
int main()
{
	int money,d1000,d500,d100;
	scanf("%d",&money);
	
	d1000 = (money/1000);
	d500  = (money%1000/500);
	d100  = (money%1000%500/100);
	
	printf("1000 * %d\n 500 * %d\n 100 * %d",d1000, d500, d100);
}
