#include<stdio.h>
#include<string.h>

int main() {
	int N;
	long long value = 100000;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		value = value * 1.05;
		if (value % 1000 != 0)value = value - (value % 1000) + 1000;
	}
	printf("%lld\n", value);
	return 0;
}

