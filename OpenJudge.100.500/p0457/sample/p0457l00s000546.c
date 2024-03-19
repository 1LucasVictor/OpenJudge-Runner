#include <stdio.h>

#define MAX 200000

int main()
{
	int N, M, K;
	int i;
	int j;
	int A[MAX];
	int B[MAX];
	int read_book;
	int read_time;

	scanf("%d %d %d", &N, &M, &K);

	for (i=0; i<N; i++)
		scanf("%d", &A[i]);
	for (i=0; i<M; i++)
		scanf("%d", &B[i]);

	i = 0;
	j = 0;
	read_book = 0;
	read_time = 0;
	while (read_time < K){
		if (A[i] < B[j]) {
			read_time += A[i];
			i++;
		}else {
			read_time += B[j];
			j++;
		}
		read_book += 1;

		if (read_book > (N + M))
			break;
	}

	printf("%d\n", read_book-1);
}