#include <stdio.h>
int main ()
{
	int a,b,c,d;
	while (	scanf("%d%d%d%d",&a,&b,&c,&d)!= EOF )
	{		
		if(b<c|| d < a)  printf("0\n");
		else if(d>b)
		{
			if(a>c)printf("%d\n",b-a); 
			else printf("%d\n",b-c);
		}
		 
		else
		{
			 if(a>c) printf("%d\n",d-a);
			 else printf("%d\n",d-c);
		 }
	
	
	
	}
	
	
	
	return 0;
}