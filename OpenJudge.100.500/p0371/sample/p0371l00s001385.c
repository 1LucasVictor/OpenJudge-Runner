#include <stdio.h>

int main(){
	int n, a, min, max, i;
    long int sum;
	
	min = 1000000;
	max = -1000000;
	sum = 0;
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		scanf("%d", &a);
		if(a < min){
			min = a;
		}
		if(a > max){
			max = a;
		}
		sum = sum + a;
	}
	
	printf("%d %d %ld\n", min, max, sum);
	return 0;
}