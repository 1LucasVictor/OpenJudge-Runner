#include<stdio.h>
int isprime(int m){
	int k;
	for(k=2;k*k <= m;k++){
		if(m%k==0)return 0;
	}
	return 1;
}	
int main(){
	const int max=1000000;
	int sum[max];
	int i, n;
	for(i=2;i<=max;i++){
		if(isprime(i)){
			sum[i+1]=sum[i]+1;
		}else{
			sum[i+1]=sum[i];
		}
	}	
	while(scanf("%d",&n) != EOF){
		printf("%d\n",sum[n+1]);
	}
	return 0;
}