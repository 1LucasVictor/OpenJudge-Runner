#include <stdio.h>

int main(void){
	int n , i , j , k , num[5001] , sum , max;
	while(1){
		scanf("%d" , &n);
		if(n == 0) break;
		for(i=1;i<=n;i++){
			scanf("%d" , &num[i]);
		}
		max = 0;
		for(i=1;i<=n;i++){
			for(j=i;j<=n;j++){
				sum = 0;
				for(k=i;k<=j;k++){
					sum += num[k];
				}
				if(sum > max) max = sum;
			}
		}
		printf("%d\n" , max);
	}
	return 0;
}