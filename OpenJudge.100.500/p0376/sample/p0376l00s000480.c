#include<stdio.h>
int main(void){
	int a,b;
	int kazu[100];
	scanf("%d",&a);
	for(b=0;b<a;b++){
		scanf("%d",&kazu[b]);
	}
	for(b=a-1;b>=0;b--){
		if(b == 0){
			printf("%d\n",kazu[b]);
		}
		else{
			printf("%d ",kazu[b]);
		}
	}
	
	return 0;
}