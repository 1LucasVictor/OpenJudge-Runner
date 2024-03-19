#include<stdio.h>

int main(){
	int n = 0, k = 0;
	scanf("%d",&n);
	for(int i = 1; i <= 9; i++ ){
		if(n / i < 10 && n % i == 0){
			k = 1;
			break;
		}
	}
	if(k == 1){
		printf("Yes");
	}
	else{
		printf("No");
	}
	return 0;
}