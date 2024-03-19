#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
	long long A, B,k;
	scanf("%lld%lld", &A, &B);
	k = (A + B) / 2;
	if ((A+B) % 2 == 0)printf("%lld\n", k);
	else printf("IMPOSSIBLE\n");
	return 0;
}