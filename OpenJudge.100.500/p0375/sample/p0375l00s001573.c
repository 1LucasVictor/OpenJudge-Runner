#include <stdio.h>

int main(void)
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)if(!(i%3)||i%10==3)printf(" %d",i);
	puts("");
	return 0;
}