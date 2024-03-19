#include <stdio.h>

int main(void)
{
	int n;
	int i, j, k;
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
		
		ans = -200000;
		for (i = 0; i < n - 1; i++){/*スタート*/
			for (j = i + 1; j < n; j++){/*ゴール*/
				buf = 0;
				for (k = i; k <= j; k++){/*項数*/
					buf += a[k];
				}
				if (ans < buf){
					ans = buf;
				}
			}
		}
		
		printf("%lld\n", ans);
	}
	
	return (0);
}
/* 音ゲーの精度が上手くなりますように。 */