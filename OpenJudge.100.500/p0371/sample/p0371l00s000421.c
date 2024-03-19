#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	int n;
	char buf[1024];
	int num[10000];
	int i = 0;
	int min = 0;
	int max = 0;
	long sum = 0;
	char* ptr;

	scanf("%d\n", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s", buf);
		num[i] = atoi(buf);
	}
	min = num[0];
	max = num[0];
	sum = 0;
	for (i = 0; i < n; i++)
	{
		if (min > num[i]) min = num[i];
		if (max < num[i]) max = num[i];
		sum += (long)num[i];
	}
	printf("%d %d %ld\n", min, max, sum);
	return 0;
}
