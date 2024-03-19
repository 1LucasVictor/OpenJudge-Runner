#include<stdio.h>
int main(void){
	int A,B,K;
	scanf("%d%d%d",&A,&B,&K);
	int N;
	if(A<B){
		N=A;
	}else{
		N=B;
	}
	int a;
	for(a=1;a<N+1;a++){
		if(((A%a)==0)&&((B%a)==0)){
			K-=1;
		}
		if(K==0){
			break;
		}
	}
	printf("%d",a);
return 0;
}