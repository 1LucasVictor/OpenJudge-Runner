#include <stdio.h>
#include <math.h>

int main(){
	int a, n, i, j, z;
	while(scanf("%d", &n) != EOF){
		if(n < 2){
			printf("0\n");
			continue;
		}
		a = 1;
		for(i = 3; i <= n; i += 2){
			z = 0;
			for(j = 3; j * j <= i; j += 2){
				if(i % j == 0){
					z = 1;
					break;
				}
			}
			if(z == 0) a++;
		}
		printf("%d\n", a);
	}
	return 0;
}