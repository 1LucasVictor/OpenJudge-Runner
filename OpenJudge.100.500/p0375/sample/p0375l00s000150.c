#include <stdio.h>
int main(){
	int i,n,x;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		x=i;
		if(x%3==0){
			printf(" %d",x);
		}else if(x%10==3){
			printf(" %d",x);
		}else{
			x/=10;
			if(x%10==3) printf(" %d",x);
		}
	}
	printf("\n");
	return 0;
}