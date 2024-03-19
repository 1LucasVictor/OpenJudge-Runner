// AtCoder ABC123: A - Five Antennas
// 2019.9.9 bal4u

#include <stdio.h>

#define ABS(x)  ((x)>=0?(x):-(x))

int main()
{
	int i, j, k, d, a[5], ans;
	
	for (i = 0; i < 5; i++) scanf("%d", a+i);
	scanf("%d", &k);
	ans = 0; for (i = 0; i < 5; i++) for (j = i+1; j < 5; j++) {
		d = ABS(a[i]-a[j]);
		if (d > k) ans++;
	}
	puts(ans > 0? ":(": "Yay!");
	return 0;
}
