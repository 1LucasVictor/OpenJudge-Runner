#include<stdio.h>
#define MAX_V 100000
int prime[MAX_V+1];
int main(){
	int i,k,v;
	for(i=2;i<=MAX_V;i++){
		prime[i]=1;
	}
	for(i=2;i*i<=MAX_V;i++){
		if(prime[i]){
			for(k=2*i;k<=MAX_V;k+=i){
				prime[k]=0;
			}
		}
	}
	while(scanf("%d",&v)!=EOF){
		int cnt=0;
		for(i=v;i>=2;i--){
			if(prime[i]==1)	cnt++;
		}
		printf("%d\n",cnt);
	}
	return 0;
}