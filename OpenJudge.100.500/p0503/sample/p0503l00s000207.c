#include<stdio.h>
int main()
{
	long long int num;
	long long int ar[200000] = { 0 };
	scanf("%lld", &num);
	long long int i = 1;
	int prime = 1;
	while (i <= num)
	{
		long long int temp;;
		scanf("%lld", &ar[i]);
		for (int j = 1; j < i; j++) {
			if (ar[j] == ar[i]) {
				prime = 0;
				break;
			}
		}
		if (prime == 0)break;
		i++;
	}
		if (prime == 1)printf("YES\n");
		else printf("NO\n");
	return 0;
}