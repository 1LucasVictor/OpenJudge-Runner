#include<stdio.h>
int main(void)
{
	int a,x,i;
	x=100000;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		x=x*0.05+x;
		if(x%1000>0){
			x=x-x%1000+1000;
		}
	}
	printf("%d\n",x);
	return 0;
}