// AOJ Volume 0 Problem 0022

#include <stdio.h>

int aoj0022(int n)
{
    int i;
	int a[5000];
	int sum_all;
	int sum_rear;
	int max_front;
	int max_rear;

	
	scanf("%d", &a[0]);
	sum_all = max_front = max_rear = a[0];
	
	for (i = 1; i < n; i++){
		scanf("%d", &a[i]);
		sum_all += a[i];
		if (max_front < sum_all){
			max_front = sum_all;
		}
	}
	
	sum_rear = 0;
	for (i = n - 1; i >= 0; i--){
		sum_rear += a[i];
		if (max_rear < sum_rear){
			max_rear = sum_rear;
		}
	}
	
	return (max_rear + max_front - sum_all);
}

int main(void)
{
    int n;
    int gcd, lcm;
    
    while (1){
		scanf("%d", &n);
		if (n == 0){
			break;
		}
		printf("%d\n", aoj0022(n));
    }
	
	return (0);
}