// AtCoder ABC139: B - Power Socket
// 2019.9.2 bal4u

#include <stdio.h>

int main()
{
	int A, B, a, b, ans;
	
	scanf("%d%d", &A, &B);
	if (B <= A) ans = 1;
//	else ans = (B-A-1)/(A-1)+2;
	else ans = (A+B-3)/(A-1);
	printf("%d\n", ans);
	return 0;
}
