#include <stdio.h>

int main() {
	int a, b, k, cont = 0;
	scanf("%d %d %d", &a, &b, &k);		
	if(a <= b){
		for(int i = 1; i <= a; i++){
			if(a%i == 0 && b%i == 0)
				cont++;
			if(cont == k){
				printf("%d\n", i);
				break;
			}
		}
	}
	else{
		for(int i = 1; i <= b; i++){
			if(a%i == 0 && b%i == 0)
				cont++;
			if(cont == k){
				printf("%d\n", i);
				break;
			}
		}
	}

	return 0;
	
}