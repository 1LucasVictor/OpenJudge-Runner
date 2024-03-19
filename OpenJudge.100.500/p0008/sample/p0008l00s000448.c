#include <stdio.h>
#define N 999999
long prime(long num);
int main(){
	long j,n,ans;
	while(scanf("%ld",&n)!=EOF){
		printf("%ld\n",prime(n));
	}
	return 0;
}
long prime(long num){
	long i,j;
	int k=0;
	char b[N];
	for(i=0;i<N;i++)b[i]=0;
	for(i=2;i<=num;i++){
		if(b[i]==0){
			k++;
			for(j=1;i*j<N;j++)b[j*i]=1;
		}
	}
	return k;
}