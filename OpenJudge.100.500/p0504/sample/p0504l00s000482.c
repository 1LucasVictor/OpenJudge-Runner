#include<stdio.h>

int main()
{
	int h,a,i=0;
	scanf("%d%d",&h,&a);
	while(h>0)
	{ h=h-a;
		i++;
	}
	if(h<0)printf("%d",i);
	else printf("%d",i);
		
	
	return 0;
		
	
}