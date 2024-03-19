#include <stdio.h>

int main(void)
{
	int i,a,flag=0;
	scanf("%d",&a);
		if(a/1000==a/100-a/1000*10||a/100-a/1000*10==a/10-a/100*10||a/10-a/100*10==a%10)flag=1;
	
	
	if(flag==1)printf("Bad\n");
	else printf("Good\n");
	
	return 0;
}
