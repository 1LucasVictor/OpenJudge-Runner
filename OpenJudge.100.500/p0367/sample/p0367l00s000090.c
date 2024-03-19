#include <stdio.h>

int main(void)
{int a,b,c,i;
	i=0;
	scanf("%d %d %d",&a,&b,&c);
	for(a;a<=b;a++){
	if(c%a==0)
	i=i+1;
	else
	i=i;
	}
	printf("%d\n",i);
	return 0;
}