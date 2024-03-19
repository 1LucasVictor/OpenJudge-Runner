#include <stdio.h>

int main(void){
	int A,B,K;
	int count=0;

	scanf("%d %d %d",&A,&B,&K);
    A=A*10000;
    B=B*10000;
	for(int i=1; i<=A && i<=B; i++){
		if(A%i==0 && B%i==0){
			count++;
		}
		if(count==K){
			printf("%d\n",i);
			break;
		}
	}
}