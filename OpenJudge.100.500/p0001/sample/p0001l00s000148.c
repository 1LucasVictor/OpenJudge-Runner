#include <stdio.h>

int main()
{
	int a,b,c,d;
	while(scanf("%d %d",&a,&b)!=EOF){
		d=1;
		c=a+b;
		while(c/10){
			c/=10;
			d++;
		}
		printf("%d\n",d);
	}
	return 0;
}