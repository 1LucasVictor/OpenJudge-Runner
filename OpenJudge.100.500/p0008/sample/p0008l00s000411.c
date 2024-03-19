#include<stdio.h>
#define MAX_V 1000000
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
	for(i=2;i<=MAX_V;i++){
		prime[i]+=prime[i-1];
	}
	while(scanf("%d",&v)!=EOF){
		printf("%d\n",prime[v]);
	}	
	return 0;
}