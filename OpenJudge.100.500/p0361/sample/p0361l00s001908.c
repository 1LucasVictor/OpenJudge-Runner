#include <stdio.h>

int main(void)
{
	int s;
	scanf("%d",&s);
	if(s<0 && 86400<s)
	printf("no");
	printf("%d:%d:%d\n",s/3600%60,s/60%60,s%60);
	
	return 0;
}