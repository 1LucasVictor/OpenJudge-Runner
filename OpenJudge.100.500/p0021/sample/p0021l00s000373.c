#include <stdio.h>
#include <string.h>

void bubble_sort(int *data, int n);
void swap(int *a, int *b);

int main(void)
{
	int n;
	int num_line[5000];
	int num_sum[5000];
	int sum_max;
	int i, j, k, temp;
	
	while (1){
		scanf("%d", &n);
		
		if (n == 0)	break;
		
		memset(num_line, NULL, sizeof(num_line));
		
		for (i = 0; i < n; i++){
			scanf("%d", &num_line[i]);
		}
		
		memset(num_sum, 0, sizeof(num_sum));
		
		i = j = 0;
		while (num_line[j] != NULL){
			if (num_line[j] >= 0){
				while (num_line[j] >= 0 && num_line[j] != NULL){
					num_sum[i] += num_line[j];
					j++;
				}
				if (num_line[j] == NULL) break;
				i++;
			}
			
			else {
				while (num_line[j] < 0 && num_line[j] != NULL){
					num_sum[i] += num_line[j];
					j++;
				}
				if (num_line[j] == NULL) break;
				i++;
			}
		}
		bubble_sort(num_line, n);
		
		sum_max = 0;
		
		if (num_line[0] <= 0){
			printf("%d\n", num_line[0]);
		}
		else {
			for (j = 0; j <= i; j++){
				temp = num_sum[j];
				for (k = j; k <= i - 2; k++){
					if (num_sum[j] <= 0 || num_sum[k + 2] - num_sum[k + 1] < 0){
						break;
					}
					temp += num_sum[j + 2] + num_sum[j + 1];
				}
				sum_max = (temp > sum_max) ? temp : sum_max;
			}
			printf("%d\n", sum_max);
		}
	}
	return (0);
}

void bubble_sort(int *data, int n){
	int i, j;
	for (i = 0; i < n - 1; i++) for (j = 0; j < n - i - 1; j++) if (data[j] < data[j + 1]) swap(&data[j], &data[j + 1]);
}

void swap(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}