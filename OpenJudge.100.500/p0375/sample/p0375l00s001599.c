#include <stdio.h>

int main(void){
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		int x=i;
		if(x%3 == 0){
			printf(" %d",i);
			x=0;
		}
		while(x){
			if(x%10 == 3) printf(" %d",i);
			x/=10;
		}
	}
	printf("\n");
	return 0;
}