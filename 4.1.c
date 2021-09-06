#include<stdio.h>
int main() {
	int num, i, j, k;
	scanf("%d",&num);
	
	for(i=1; i<=num; i++) {
		j = num-i;
		for(k=0; k<j; k++ ) {
			printf(" ");
		}
		
		j = (i*2)-1;
		for(k=1; k<=j; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
