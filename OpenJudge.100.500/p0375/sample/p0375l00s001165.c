#include<stdio.h>
int main(void)
{
	int i,x,flg,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
		flg=0;
		if(i%3==0) flg=1;
			x=i;
		while(0<x) {
			if(x%10==3) flg=1;
			x/=10;
		}
		if(flg==1) printf(" %d",i);
	}
	printf("\n");
	
	return 0;
}

