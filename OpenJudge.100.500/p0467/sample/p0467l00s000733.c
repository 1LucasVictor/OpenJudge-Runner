#include<stdio.h>
int main()
{
	int a,b,c,k,d=0,i=0,e=0;
	scanf("%d %d %d %d",&a,&b,&c,&k);
	if(a>=k) printf("%d\n",k);
	else if(a+b>=k) printf("%d\n",a);
	else printf("%d\n",a-(k-a-b));
	return 0;
}