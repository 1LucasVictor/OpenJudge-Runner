#include <stdio.h>
#include <math.h>

int main(){
	int a, n, i, j, z, s[78498];
	while(scanf("%d", &n) != EOF){
		if(n < 2){
			printf("0\n");
			continue;
		}
		s[0] = 2;
		a = 1;
		for(i = 3; i <= n; i += 2){
			z = 0;
			for(j = 0; s[j] * s[j] <= i; j++){
				if(i % s[j] == 0){
					z = 1;
					break;
				}
			}
			if(z == 0){
				s[a] = i;
				a++;
			}
		}
		printf("%d\n", a);
	}
	return 0;
}