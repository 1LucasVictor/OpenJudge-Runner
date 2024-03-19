#include<stdio.h>
int main(void)
{
	int a,b,c,w=0;
	scanf("%d %d %d",&a,&b,&c);
	for(a;a<=b;a++){
		if(c%a==0)w++;
	}
	printf("%d\n",w);
}
