#include<stdio.h>
int isprime(int n){
	int i;
	for(i=2;i*i <= n;i++){
		if(n%i==0)return 0;
	}
	return 1;
}
int main(){
	int sum[10000]={0};
	int i, n;
	while(scanf("%d",&n) != EOF){
		for(i=2;i<=n;i++){
			if(isprime(i)){
				sum[i+1]=sum[i]+1;

			}else{
				sum[i+1]=sum[i];
			}
		}
		printf("%d\n",sum[n+1]);
	}
	return 0;
}