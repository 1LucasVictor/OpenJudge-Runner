#include <stdio.h>

int main(void){
	int n,i,x;
	scanf(" %d",&n);
	for(i=1;i<=n;i++){
		if(i%3==0 || i%10==3){
			printf(" %d",i);
		}else{
			for(x=i;x>1;){
				x /= 10;
				if(x==3 || x%10 == 3){
					printf(" %d",i);
					x = 0;
				}
			}
		}
	}
	printf("\n");
	return 0;
}
