#include <stdio.h>
#include "string.h"

main()
{
	
	int lename;
	int i,j,k,l,s=0,sn,sl,j1;
	char name[50];

	printf("Enter your name: ");
	gets(name);
	
	lename=strlen(name);
	printf("\n");
	
	//-----------------up-----------------------
		if(lename%2==0)
		{
		for(i=1;i<=lename/2;i++) ////row
    	{
    		sl = lename-i;
    		
    	for(j=1;j<=sl;j++) ////
		{
			printf(" ");
		}
				
    	for (j=0;j<=lename-sl+i-1; j++)
	 	{
	 		j1 = lename/2;
          printf("%c",name[j+j1-i]);
                
        }       

        printf("\n");	
		
    	} 
	}
    //------------------------------------------
    	else
    	{
    		for(i=0;i<=lename/2;i++)
    	{
    		sl = lename-i-1;
    		
    	for(j=0;j<=sl;j++)
		{
			printf(" ");
		}
				
    	for (j=0;j<=lename-sl+i-1; j++)
	 	{
	 		j1 = lename/2;
          printf("%c",name[j+j1-i]);
                
        }       

        printf("\n");	
		
    	}  
    	
		}

	//----------------down-----------------
	
	if(lename%2==0)
	{
			for(i=lename/2-1;i>=1;i--) ////row
    	{
    		sl = lename-i;
    		
    	for(j=1;j<=sl;j++) ////
		{
			printf(" ");
		}
				
    	for (j=0;j<=lename-sl+i-1; j++)
	 	{
	 		j1 = lename/2;
          printf("%c",name[j+j1-i]);
                
        }       

        printf("\n");	
		
    	}
    }
    	
    	else 
    	{
    		for(i=lename/2-1; i>=0; i--)
    	{
    		sl = lename-i-1;
    		
    	for(j=0; j<=sl; j++)
		{
			printf(" ");
		}
				
    	for (j=0; j<=lename-sl+i-1; j++)
	 	{
	 		j1 = lename/2;
	 		
          printf("%c",name[j+j1-i]);
                
        }       
        
        printf("\n");	
		
    	} 
		
	}
	
	return 0;
}


