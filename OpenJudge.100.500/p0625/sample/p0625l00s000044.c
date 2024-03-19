#include <stdio.h>

int main ()
{
	int a,b;
	scanf("%d %d",&a,&b);
	
	if (a>8||b>8)
	{
		printf(":(");
	} else if(a+b<=16||a+b>=0) {printf("Yay!");} 
	else printf(":(");
	
	return 0;
} 