#include<stdio.h>

int CheckPrime(int n){
	int i;
	if(n%2==0) return 0;
	for(i=3;i<n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int n, result;
	int i;
	while(scanf("%d",&n)!=EOF){
		result=0;
		if(n>=2) result++;
		if(n>=3) result++;

		for(i=6;i-1<=n;i+=6){
			if(CheckPrime(i-1)==1) result++;
			if(i+1<=n && CheckPrime(i+1)==1) result++;
		}
		printf("%d\n",result);
	}
	return 0;
}