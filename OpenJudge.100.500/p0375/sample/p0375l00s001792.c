#include<stdio.h>
int main(){
	int n,x;
	scanf("%d",&n);
	for(int i=3;i<=n;i++){
		x=i;
		if(x!=0&&x%3==0){
			printf(" %d",i);
		}else{
			while(x!=0){
				if(x%10==3){
					printf(" %d",i);
					break;
				}else{
					x/=10;
				}
			}
		}
	}
	printf("\n");
}
