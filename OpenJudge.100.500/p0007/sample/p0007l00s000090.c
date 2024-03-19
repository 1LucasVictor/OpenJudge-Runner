#include <stdio.h>

int main(void){
	int num;
	int c;
	int i;
	int j;
	int k;
	int l;


	c = 0;
	while(scanf("%d", &num) != EOF){
		for(i = 0; i < 10; i++){
			for(j = 0; j < 10; j++){
				for(k = 0; k < 10; k++){
					for(l = 0; l < 10; l++){
						if((i + j + k + l) == num){
							c++;
						}
					}
				}
			}
		}
		printf("%d\n", c);
		c = 0;
	}

	return(0);
}