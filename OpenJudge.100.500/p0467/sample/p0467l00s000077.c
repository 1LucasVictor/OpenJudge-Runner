#include<stdio.h>
int main(void)
{
	int a,b,c,k,x,z,w;
	scanf("%d %d %d %d",&a,&b,&c,&k);
	x=k-a;
	if(x>0){
		z=x-b;
		if(z>0){
			printf("0\n");
		}
		else{
			printf("%d",a);
		}
	}
	else{
		printf("%d",a);
	}
	return 0;
}