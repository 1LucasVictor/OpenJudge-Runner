#include<stdio.h>

int Prime(int n){
	int j;
	for(j = 2; j < n; j++){
		if(n % j == 0){
			return 0;
		}
	}
	return 1;
}

int main(void){
	int n,i;
	
	while(scanf("%d",&n) != EOF){
		int count = 0;
		for(i = 2; i <= n; i++){
			count += Prime(i);
		}
		printf("%d\n", count);
	}
	
	return 0;
}