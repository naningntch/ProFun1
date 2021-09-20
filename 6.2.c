#include<stdio.h>
int main() {
	int num,i,j;
	scanf("%d",&num);
	
	for(i=0; i<(2*num)-1; i++) {
		printf("*");
		}
		printf("\n");
		
	for(i=0; i<num-1; i++) {
		for(j=0; j<=i; j++) {
			printf(" ");
			}
		for(j=1; j<(2*num)-2*i-2; j++) {
			printf("*");
		}
		printf("\n");
	}
	for(i=0; i<num-1; i++) {
		for(j=0; j<=num-i-3; j++) {
			printf(" ");
			}
		for(j=0; j<=i*2+2; j++) {
			printf("*");
		}
		printf("\n");
	
	}
	return 0;
}
