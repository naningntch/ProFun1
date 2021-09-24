#include <stdio.h>
int main()
{
	int bank[4][2] = {1000,0,500,0,100,0};
	int money,i,count = 0;
	scanf("%d",&money);
	
	while(money > 0) {
		if(money >= bank[count][0]) {
			money -= bank[count][0];
			bank[count][1] += 1;
		} else {
			count++;
		}
		if (money < 100) {
			break;
		}
	}
	printf("%d * %d\n %d * %d\n %d * %d", bank[0][0], bank[0][1], bank[1][0], bank[1][1], bank[2][0], bank[2][1]);
}
