#include<stdio.h>
#include<stdlib.h>

void sort(array, size)
long long* array;
{
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size-i-1; j++) {
			if (array[j] > array[j + 1]) {
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

main(void) {
	unsigned N = 0;
	scanf("%u", &N);
	long long* llarray = malloc(sizeof(long long) * N);
	for (int i = 0; i < N; i++) {
		scanf("%lld", &llarray[i]);
	}
	sort(llarray, N);
	for (int i = 0; i < N; i++) {
		if (llarray[i] == llarray[i + 1]) {
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	return 0;
}