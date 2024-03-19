#include<stdio.h>

int main(){
	int k;
	int a,b;
	int i;
	
	scanf("%d",&k);
	scanf("%d %d",&a,&b);
	
	for(i=a;i<=b;i++){
		if(i % k == 0){
			printf("OK");
			break;
		}
		if(i == b){
			printf("NG");
		}
	}
}