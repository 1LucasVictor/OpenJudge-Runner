#include<stdio.h>


void call(int n){
	int i;
	int x;
	for(i=3;i<=n;i++){
		x=i;
		do{
			if(x/10==3){
				printf(" %d",i);
				break;
			}
			if(x%10==3){
				printf(" %d",i);
				break;
			}
			if(x%3==0){
				printf(" %d",x);
				break;
			}
			x/=10;
		}while(x>10);
	}
	printf("\n");
}

int main(){
	int n;
	
	scanf("%d",&n);
	call(n);
	
	return 0;
}