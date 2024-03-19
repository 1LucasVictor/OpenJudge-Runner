#include <stdio.h>


int main(){
	int a, b, k, i, aux;
	scanf("%i %i %i", &a, &b, &k);
	if(a>=b)
		i=a;
	else
		i=b;
	while(k>0){
		if((a%i==0)&&(b%i==0)){
			k--;
			aux=i;
		}
		i--;

	}
	printf("%i\n", aux);
}