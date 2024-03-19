#include<stdio.h>
#include<limits.h>
int main(){
	int n, a, i;
	long max = LONG_MIN, min = LONG_MAX, sum = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		scanf("%d", &a);
		if(a > max){
			max = a;
		}
		if(a < min){
			min = a;
		}
		sum = sum + a;
	}
	printf("%ld %ld %ld\n", min, max, sum);
}
