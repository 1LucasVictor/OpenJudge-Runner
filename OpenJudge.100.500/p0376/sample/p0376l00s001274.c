#include<stdio.h> 

int main()
{     
	int a[100],i,b;    
	 scanf("%d",&b);    
	 for(i=0;i<b;i++)
	{         
		scanf("%d",&a[i]);     
	}    
	 for(i=b-1;i>=0;i--)
	{         
	if(i!=b-1)
	 printf(" ");        
	 printf("%d",a[i]);    
	 }     
	printf("\n");  
		 return 0;
 }