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
	int index_max_front;
	int index_max_rear;
	
	scanf("%d", &a[0]);
	sum_all = max_front = a[0];
	index_max_front = 0;
	
	for (i = 1; i < n; i++){
		scanf("%d", &a[i]);
		sum_all += a[i];
		if (max_front < sum_all){
			max_front = sum_all;
			index_max_front = i;
		}
	}
	
	sum_rear = 0;
	max_rear = a[n - 1];
	index_max_rear = n - 1;
	for (i = n - 1; i >= 0; i--){
		sum_rear += a[i];
		if (max_rear < sum_rear){
			max_rear = sum_rear;
			index_max_rear = i;
		}
	}
	
//	printf("%d->%d  %d->%d\n", max_front, index_max_front, max_rear, index_max_rear);
	
	if (index_max_rear <= index_max_front){
		return (max_rear + max_front - sum_all);
	}
	if (max_front > max_rear){
		return (max_front);
	}
	return (max_rear);
}

int main(void)
{
    int n;
    
    while (1){
		scanf("%d", &n);
		if (n == 0){
			break;
		}
		printf("%d\n", aoj0022(n));
    }
	
	return (0);
}