#include <stdio.h>
int main(void){
	while(1){
		int x,a,sum=0;
		scanf("%d",&x);
		if(x==0) break;
		while(x!=0){
			a=x%10;
			sum=sum+a;
			x=x/10;
		}
		printf("%d\n",sum);
	}
	return 0;
}
