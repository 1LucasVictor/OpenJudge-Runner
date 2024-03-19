# include<stdio.h>
int main() {
	int min=100000, max=0, n, a;
	long sum=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);

		if (a < min) 
			min = a;
		if (a > max) 
			max = a;
			
		sum = sum + a;
		}
	printf("%d %d %d\n", min, max, sum);
	return 0;
}