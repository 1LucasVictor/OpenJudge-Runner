#include<stdio.h>
#include<math.h>
int main () {
	int input , n;
	int max = -1000001 , min = 1000001 , sum = 0;
	int i;
	scanf("%d" , &n);
	for(i = 0; i < n; i++) {
		scanf("%d" , &input);
		sum += input;
		if (input < min) {
			min = input;
		}
		if (max < input) {
			max = input;
		}
	} 
	printf("%d %d %d\n" , min , max , sum);
	return 0;
}