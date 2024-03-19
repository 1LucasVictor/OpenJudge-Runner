#include <stdio.h>

int main(void)
{
	int n;
	int i, j, k;
	int a[5000];
	long long ans;
	long long buf;
	int start_max;
	
	while (1){
		scanf("%d", &n);
		if (n == 0){
			break;
		}
		
		for (i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		
		ans = -2000000;
		start_max = -1000000;
		for (i = 0; i < n - 1; i++){/*スタート*/
			/*if (a[i - 1] >= a[i] && i != 0){
				continue;
			}*/
			buf = a[i];
			for (j = i + 1; j < n; j++){/*ゴール*/
				/*for (k = i; k <= j; k++){/*項数*/
					/*printf("[%d]%d ", k, a[k]);
					buf += a[k];
				}*/
				buf += a[j];
				/*printf("%d\n", buf);*/
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