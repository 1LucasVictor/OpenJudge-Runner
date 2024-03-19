#include <stdio.h>

int t[1000000];//0ならふるい,1なら外し
int main(void)
{
	int n, i, j, count;
	while (scanf("%d", &n) != EOF){
		count = 0;
	
		for (i = 2; i <= n * n; i++){
			if (t[i] == 0){
				for (j = 2 * i; j <= n; j++){
					if (j % i == 0){
						t[j] = 1;
					}
				}
			}
		}
		t[0] = t[1] = 1;
	
		for (i = 0; i <= n; i++){
			if (t[i] == 0){
				count++;
			}
		}
		printf("%d\n", count);
	}
	
	return 0;
}