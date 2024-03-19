#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,k;
	scanf("%d %d %d %d",&a,&b,&c,&k);
	if(a+b>=k)
		printf("%d\n",a);
	else
		printf("%d\n",2*a+b-k);
	return 0;
}
