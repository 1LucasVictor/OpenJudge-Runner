#include<stdio.h>
int main(void)
{
	int a,b,k,c;
	scanf("%d %d",&a,&b);
	
	k = (a+b) / 2;
	c = (a+b) % 2;
	
	if(c==1){
		printf("impossible");
	}else{
		printf("%d",k);
	}
	return 0;
}