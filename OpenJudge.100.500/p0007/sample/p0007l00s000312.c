#include <stdio.h>

int main(void)
{
	int a, b, c, d, n;
	int i, i2, i3, i4, i5;
	int ans;
	
	while (scanf("%d", &n) != EOF){
		ans = 0;
		if (37 <= n){
		}
		else {
			for (i2 = 0; i2 <= 9; i2++){
				for (i3 = 0; i3 <= 9; i3++){
					for (i4 = 0; i4 <= 9; i4++){
						for (i5 = 0; i5 <= 9; i5++){
							if ((i2 + i3 + i4 + i5) == n){
								ans++;
							}
						}
					}
				}
			}
		}
		printf("%d\n", ans);
	}
	
	return (0);
}