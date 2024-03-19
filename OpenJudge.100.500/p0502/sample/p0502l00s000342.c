#include <stdio.h>
int main() {
	int a, numero, blz=0;
	int cont=0;
	scanf("%d", &a);
	while(cont < a){
		scanf("%d", &numero);
		if(numero%2==0){
			if((numero %3 != 0) && (numero%5 !=0)){
				blz=1;
				break;
			}
		}
		++cont;
	}
	if(blz) {
		printf("DENIED\n");
	} else {
		printf("APPROVED\n");
	}

	return 0;
}