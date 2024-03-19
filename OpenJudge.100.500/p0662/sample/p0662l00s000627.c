#include <stdio.h>
int main ()
{
	int a,b,c,d;
	while (	scanf("%d%d%d%d",&a,&b,&c,&d)!= EOF )
	{		
		if(b<c)  printf("0\n\n");
		else if(d>b)
		{
			if(a>c)printf("%d\n\n",b-a); 
			else printf("%d\n\n",b-c);
		}
		 
		else
		{
			 if(a>c) printf("%d\n\n",d-a);
			 else printf("%d\n\n",d-c);
		 }
	
	
	
	}
	
	
	
	return 0;
}