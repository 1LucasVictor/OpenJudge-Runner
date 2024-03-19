#include <stdio.h>


int main(){
	int i, j, k, cont=0, vet[5];
	for(i=0;i<5;i++){
		scanf("%i", &vet[i]);
	}
	scanf("%i", &k);
	for(i=0;i<5;i++){
		for(j=i+1; j<5; j++){
			if((vet[j]-vet[i])>k){
				cont++;
			}
		}
	}
	if(cont==0)
		printf("Yay!\n");
	else
		printf(":(\n");
}