#include <stdio.h>

int max(int a , int b){
	return a > b ? a : b;
}

int main(void){
	int n , i , j , num[5001] , sum , m;
	while(1){
		scanf("%d" , &n);
		if(n == 0) break;
		for(i=1;i<=n;i++){
			scanf("%d" , &num[i]);
		}
		m = 0;
		for(i=1;i<=n;i++){
			sum = 0;
			for(j=i;j<=n;j++){
				sum += num[j];
				m = max(sum , m);
			}
		}
		printf("%d\n" , m);
	}
	return 0;
}