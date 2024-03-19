#include <stdio.h>


int main(){
	int x, eq=0, eq2=0, moedas=0;
	scanf("%d", &x);
	eq= x/500;
	eq2= (x%500)/5;
	moedas= (eq*1000) + (eq2 *5);
	printf("%d\n", moedas);
	return 0;
	
}