#include <stdio.h>

int main( )
{
	int x,y,z,i,m=0,n=0,t;
	scanf ("%d %d %d",&x,&y,&z);
	int a[x],b[y];
	for (i=0; i<x; i++)
	{
		scanf ("%d",&a[i]);
		m = m+ a[i];
	}
	
	for (i=0; i<y; i++)
	{
		scanf ("%d",&b[i]);
		n = n +b[i];
		
	}
	t = m+n;
	if (t==z) {printf ("%d",x+y);	}
	else 
	{
	
	int p=0,j=0,count=0,q=0;
	i=0;

	
	while (1)
	{
	  
	  
	  
		p = p + a[i];
			if (p>z) break;
		     else	count++;
		     
		p = p + b[j];
    	if (p>z) break;
    	else count++;
		i++; 
		j++;
			
	}
	
	printf ("%d\n",count);
	
	}
	
	return 0;
}