#include <stdio.h>

int main(void)
{
	int n;
	int i, j;
	int a[5000];
	long long ans;
	long long buf;
	
	while (1){
		scanf("%d", &n);
		if (n == 0){
			break;
		}
		
		for (i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		
		ans = -5000000000;
		for (i = 0; i < n - 1; i++){/*スタート*/
			buf = a[i];
			for (j = i + 1; j < n; j++){/*ゴール*/
				buf += a[j];
				if (ans < buf){
					ans = buf;
				}
			}
		}
		
		
		printf("%lld\n", ans);
	}
	
	return (0);
}
/* 音ゲーの精度がよくなりますように。 */