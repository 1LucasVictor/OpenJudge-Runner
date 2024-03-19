#include<stdio.h>
int main(void)
{
	int a,b;
	int x,z;
	while(scanf("%d%d",&a,&b)!=EOF) {
		x=a+b;
		z=1;
		while(x>=10) {
			x=x/10;
			z=z+1;
		}
		printf("%d\n",z);
	}
	
	return 0;
}