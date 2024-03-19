/*********************************
*include
*********************************/
#include <stdio.h>
#pragma warning (disable:4996)

/*********************************
*define
*********************************/
signed long long ary[10000];

/*********************************
*function
*********************************/
int main(void)
{
	long long num;
	long long loop;
	long long min;
	long long max;
	long long sum;

	scanf("%lld", &num);

	for(loop = 0; loop < num; loop++) {
		scanf("%lld", &ary[loop]);
	}

	min = ary[0];
	max = ary[0];
	sum = 0;

	/* ????°????????????§??????????¨?????±??????? */
	for(loop = 0; loop < num; loop++) {
		if(min > ary[loop]) {
			min = ary[loop];
		}
		if(max < ary[loop]) {
			max = ary[loop];
		}
		sum = sum + ary[loop];
	}

	printf("%lld %lld %lld\n", min, max, sum);

	return 0;
}