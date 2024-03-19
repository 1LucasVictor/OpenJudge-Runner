#include <stdio.h>

int main() {
	int a, b, k, cont[101];
	scanf("%d %d %d", &a, &b, &k);
	int i = 1, j = 0;		
	for(i = 1; i < 101; i++){
			if(a%i == 0 && b%i == 0){
				cont[j] = i;
				j++;
			}			
	}
	printf("%d\n", cont[j-k]);

	return 0;
}