#include <stdio.h>
int main ()
{
	int a,b,c,d;
	while (	scanf("%d%d%d%d",&a,&b,&c,&d)!= EOF )
	{		
		if(b<c)  printf("0\n");
		else if(d>b) printf("%d\n",b-c); 
		else printf("%d\n",d-c);
	
	
	
	}
	
	
	
	return 0;
}