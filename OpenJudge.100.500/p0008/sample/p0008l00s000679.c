#include <stdio.h>

int main(void)
{
	int n;
	int i, j;
	int flag;
	int cnt;
	
	while (scanf("%d", &n) != EOF){
		cnt = 0;
		for(i = 2; i <= n; i++){
			flag = 0;
			for (j = 2; j < i; j++){
				if (i % j == 0){
					flag = 1;
					break;
				}
			}
			if (flag == 0){
				cnt++;
			}
		}
		printf("%d\n", cnt);
	}
	return (0);
}