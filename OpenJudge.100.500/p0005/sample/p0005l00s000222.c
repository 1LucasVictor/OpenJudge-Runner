#include<stdio.h>

int main(){

	char str[100];
	char *p,*q;

	//?????§????§?20???????????????????????????
	fgets(str, sizeof(str), stdin);

	p = q = str;
	
	//???????????????????°??????§?§????????????????
	while(*q != '\n'){
		q++;
	}
	//???????°?????????????????????????????????????	
	q=q-1;	
	while(q >= p){
		putchar(*q);
		q--;
	}
	printf("\n");
	
    return 0;
}