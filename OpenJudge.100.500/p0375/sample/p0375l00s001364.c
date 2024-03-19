#include<stdio.h>

int main(){
	
	int n,i,x;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		x=i;
		if(i%3==0 || i%10==3){
			printf(" %d",i);
		} else {
			while(1){
				x/=10;
				if(x%10==3){
					printf(" %d",i);
					break;
				}
				if(x==0)break;
			}
			
		}
	}
	printf("\n");
	
	return 0;
}

