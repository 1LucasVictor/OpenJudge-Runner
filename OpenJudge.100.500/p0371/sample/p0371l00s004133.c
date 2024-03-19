#include<stdio.h>

int main(void) {

	long int number = 0;	scanf("%d", &number);
	long long int date[10001] = {0};

	long long int max = -1000000;
	long long int min = 1000000;
	long long int total = 0;
	
	for (int i = 0; i < number; i++) {

		scanf("%lld", &date[i]);

		if (max < date[i]) {
			max = date[i];
		}
		if (min > date[i]) {
			min = date[i];
		}

		total += date[i];
	}

	printf("%lld %lld %lld\n", min, max, total);

	return 0;
}
