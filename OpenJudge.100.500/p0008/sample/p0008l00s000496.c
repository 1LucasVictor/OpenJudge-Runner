#include<stdio.h>
#include<string.h>

int isPrime(x){
	int i;
	if(x == 2 || x == 3){
		return 1;
	}else if(x == 1 || x % 2 == 0){
		return 0;
	}else{
		for(i=3;i<x/2;i=i+2){
			if(x % i == 0){
				return 0;
			}
		}
	}

	return 1;
}

int main(){
	int x;
	int n;

	while(scanf("%d", &x) != EOF){
		for(n=0; x>1; x--){
			if(isPrime(x)){
				n++;
			}
		}
		printf("%d\n", n);
	}

	return 0;
}