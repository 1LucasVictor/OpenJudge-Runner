#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,j,n;
	int answer;
	int *PrimeArr;
	while(scanf("%d",&n)!=EOF){
		answer=0;
		PrimeArr = (int *)calloc(n+1, sizeof(int));
		for(i=2;i<=n;i++) PrimeArr[i]=1;
		for(i=2;i<=n;i++){
			if(PrimeArr[i]==0) continue;
			else answer++;
			for(j=i*2;j<=n;j+=i){
				PrimeArr[j]=0;
			}
		}
		printf("%d\n",answer);
	}
	return 0;
}