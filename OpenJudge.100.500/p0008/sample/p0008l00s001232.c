#include <stdio.h>

int main(){
	int n, i, j, count, flag;
	while (scanf("%d", &n) != EOF){
		count = 1;
		for (i = 2;i <= n;i++){
			flag = 1;
			for (j = 2;j <= i / 2 + 1;j++){
				if ( i % j == 0){ flag = 0; break;}
			}
			if (flag == 1) count++;
		}
		printf("%d\n", count);
	}
	return 0;
}