#include <stdio.h>

int main(void){
	int n, i, j, num = 0, f = 0;
	
	for(i = 0; i < 30; i++){
		if(scanf("%d", &n) == EOF)	break;
		num = 0;
		if(n >= 2){
			for(i = 2; i <= n; i++){
				f = 0;
				for(j = 2; j < i; j++){
					if(i % j == 0){
						f = 1;
					}
				}
				if(f == 0){
					num++;
				}
			}
		}
	printf("%d\n", num);
	}
	
	return 0;
}