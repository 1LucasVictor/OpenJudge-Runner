#include <stdio.h>


int main(){
	int a, b, k, i=1, aux;
	scanf("%i %i %i", &a, &b, &k);
	while(k>0){
		if((a%i==0)&&(b%i==0)){
			k--;
			aux=i;
		}
		i++;

	}
	printf("%i\n", aux);
}