#include <stdio.h>
#include <string.h>

void bubble_sort(int *data, int n);
void swap(int *a, int *b);

int main(void)
{
	int n;
	int num_line[5000];
	int sum_max;
	int i, j, k, temp;
	
	while (1){
		scanf("%d", &n);
		
		if (n == 0)	break;
		
		memset(num_line, 0, sizeof(num_line));
		
		for (i = 0; i < n; i++){
			scanf("%d", &num_line[i]);
		}
		
		sum_max = -1;
		for (i = 0; i < n; i++){
			temp = 0;
			for (k = 0; k < n; k++){
				if (i > k) continue;
				temp += num_line[k];
				if (temp > sum_max) sum_max = temp;
			}
		}
		
		bubble_sort(num_line, n);
		if (num_line[0] <= 0) sum_max = num_line[0];
		
		printf("%d\n", sum_max);
	}
	return (0);
}

void bubble_sort(int *data, int n){
	int i, j;
	for (i = 0; i < n - 1; i++) for (j = 0; j < n - i - 1; j++) if (data[j] < data[j + 1]) swap(&data[j], &data[j + 1]);
}

void swap(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}