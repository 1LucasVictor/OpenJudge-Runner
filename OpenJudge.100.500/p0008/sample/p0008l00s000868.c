#include <stdio.h>

int main(void){

	int n, c, i, j, f;
	
	while(scanf("%d", &n) != EOF){
	
		f = 1;
		c = 0;
		if(n >= 2){
			f = 0;
		}
		for(i = 2; i <= n; i++){
			for(j = 2; j < i; j++){

				if(i % j == 0){
					f = 1;
					break;
				}
			}
			if(f == 0){
				c++;
			}else {
				f = 0;
			}
		
		}
	
	printf("%d\n", c);
	}
	return 0;
}