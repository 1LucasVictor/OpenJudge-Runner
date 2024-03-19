#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	int int_num[n];
	int min, max;
	long long sum = 0;
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &int_num[i]);
		sum += int_num[i];
	
	}
	
	min = int_num[0];
	max = int_num[0];

	for (int i = 0; i < n-1; ++i)
	{
		if (min > int_num[i+1])
			min = int_num[i+1];
		if (max < int_num[i+1])
			max = int_num[i+1];
	}

	printf("%d %d %lld\n", min, max, sum);

	return 0;
}
