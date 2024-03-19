#include <stdio.h>
int main(void){
	int D,N;
	scanf("%d",&D);scanf("%d",&N);
	
	int a[100];
	int i;
	for(i=0;i<100;i++){
		a[i] = i+1;
	}
	if(D==0){
		printf("%d",a[N-1]);
	}else if(D==1){
		printf("%d",a[N-1]*100);
	}else{
		printf("%d",a[N-1]*10000);
	}
	
	return 0;}