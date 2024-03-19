#include <stdio.h>

int main(void)
{
	int D, N;
	int ans = 1;
	
	scanf("%d %d", &D, &N);
	
	if (D == 0){
		ans = 5;
	}
	else {
		while (D != 0){
			ans *= 100;
			D--;
		}
		ans *= N;
	}
	
	printf("%d\n", ans);
	
	return (0);
}
	