#include <stdio.h>

int main(void){
	int i,ii,iii,n,x,hantei;
	while(1){
		scanf("%d %d",&n,&x);
		if(n==0&&x==0)break;
		hantei=0;
		for(i=1;i<=n-2;i++){
			for(ii=i++;ii<=n-1;ii++){
				for(iii=ii++;iii<=n;iii++){
					if(i+ii+iii==x)hantei++;
				}
			}
		}
		printf("%d\n",hantei);
	}
	return 0;
}