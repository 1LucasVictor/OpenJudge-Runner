#include<stdio.h>
int main(void)
{
	int n,a,b,x;
	scanf("%d %d %d",&n,&a,&b);
	x=n*a;
	if(x<b){
		printf("%d\n",x);
	}
	else{
		printf("%d\n",b);
	}
	return 0;
}