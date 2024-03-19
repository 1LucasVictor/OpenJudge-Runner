#include <stdio.h>
int main(void){
	char x;
	int goukei = 0;
	while(1){
		scanf("%c",&x);
		if(x == '0'&&goukei == 0)break;
		if(x == '\n'){
			printf("%d\n",goukei);
			goukei = 0;
		}else{
			goukei += atoi(&x);
		}
	}
	return 0;
}