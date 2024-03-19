#include	<stdio.h>

int main(int argc, char** argv){
	
	int i, j, k, n;

	while(scanf("%d", &n) != EOF){
		k = 0;
		for(i = 2; i <= n; i++){
			if		 (i == 2){
					k++;
			}else if(i % 2){
				for(j = 3; j * j <= i; j += 2){
					if(!(i % j))	break;
				}
				if(i < j * j)	k++;
			}
		}
		printf("%d\n", k);
	}
	return 0;
}