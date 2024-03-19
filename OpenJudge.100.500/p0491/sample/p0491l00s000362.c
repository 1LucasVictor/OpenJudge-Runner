#include <stdio.h>

long int absolute(long int *n,long int *k){
	return (*n-*k > 0) ? (*n-*k) : (*k-*n);
}
int main(){
	long int N,K;
	long int pre;
	long int cur;
	scanf("%ld%ld",&N,&K);
	
	pre = absolute(&N,&K);
	cur = absolute(&N,&K);
	
	
	while(1){
		if(K == 1){
			cur=0;
			break;
		}
		if(K == 0){
			break;
		}
		cur=absolute(&pre,&K);
		if(pre<cur){
			cur = pre;
			break;
		}
		pre=cur;
			
	}
	printf("%ld\n",cur);
	
	return 0;
}