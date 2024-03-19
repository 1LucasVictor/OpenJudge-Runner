#include <stdio.h>
 
int main()
{
	int N,a,b;
	scanf("%d %d %d", &N, &a, &b);
	int sum_train = N * a;
	if (sum_train <= b) printf("%d", sum_train);
	else printf("%d", b);
}	