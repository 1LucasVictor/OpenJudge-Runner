#include<stdio.h>
int main(void)
{
	int a,b,c,k,x,z,w;
	scanf("%d %d %d %d",&a,&b,&c,&k);
	x=k-a;
	if(x<=0){
		printf("%d",a);
	}
	else{
		z=x-b;
		if(z<=0){
			printf("%d",a);
		}
		else{
			w=0;
			printf("%d",w);
		}
	}
	return 0;
}