#include <stdio.h>

int main(void){
	int A,B;
	scanf("%d",&A);
	scanf("%d",&B);
	int wa,sa,kake;
	wa = A+B;
	sa = A-B;
	kake = A*B;
	if(wa >=sa && wa >= kake){
		printf("%d",wa);
	}else if(sa >=wa && sa >= kake){
		printf("%d",sa);
	}else if(kake >=sa && kake >= wa){
		printf("%d",kake);
	}
	
	return 0;}