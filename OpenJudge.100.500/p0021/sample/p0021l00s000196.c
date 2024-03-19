#include <stdio.h>
#include <string.h>

#define INF 100001

void bubble_sort(int *data, int n);
void swap(int *a, int *b);

int main(void)
{
	int n;
	int num_line[5000];
	int num_sum[5001];
	int sum_max;
	int i, j, k, temp;
	
	while (1){
		scanf("%d", &n);
		
		if (n == 0)	break;
		
		for (i = 0; i < 5000; i++){
			num_line[i] = INF;
		}
		
		for (i = 0; i < n; i++){
			scanf("%d", &num_line[i]);
		}
		
		memset(num_sum, 0, 5001 * sizeof(int));
		
		i = j = 0;
		
		/* Make a partial sum of sequence. */
		while (num_line[j] != INF){
			if (num_line[j] >= 0){
				while (num_line[j] >= 0 && num_line[j] != INF){
					num_sum[i] += num_line[j];
					j++;
				}
				if (num_line[j] == INF) break;
				i++;
			}
			
			else {
				while (num_line[j] < 0 && num_line[j] != INF){
					num_sum[i] += num_line[j];
					j++;
				}
				if (num_line[j] == INF) break;
				i++;
			}
		}
		
		/*sorting sequence.*/
		bubble_sort(num_line, n);
		
		sum_max = 0;
		if (num_line[0] <= 0){
			sum_max = num_line[0];
		}
		else {
			for (j = 0; j <= i; j++){
				if (num_sum[j] <= 0) continue;
				temp = num_sum[j];
				for (k = j; k < i - 1; k += 2){
					if (num_sum[k + 2] + num_sum[k + 1] < 0){
						break;
					}
					temp += num_sum[k + 2] + num_sum[k + 1];
				}
				sum_max = (temp > sum_max) ? temp : sum_max;
			}
		}
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