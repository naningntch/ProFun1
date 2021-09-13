#include <stdio.h>
#include <conio.h>
int main()
{
	char text[50];
	int n,s,a=0,e=0,i=0,o=0,u=0;
	printf("\nEnter your string : ");
	scanf("%s",&text);
	n = strlen(text);
	
	for(s=0; s<n; s++)
	{
	if(text[s]=='a')
		a++;
	
	if(text[s]=='e')
		e++;
	
	if(text[s]=='i')
		i++;
	
	if(text[s]=='o')
		o++;
	
	if(text[s]=='u')
		u++;
	}
	if(a != 0)printf("\nA = %d",a);
	if(e != 0)printf("\nE = %d",e);
	if(i != 0)printf("\nI = %d",i);
	if(o != 0)printf("\nO = %d",o);
	if(u != 0)printf("\nU = %d",u);
	
}

