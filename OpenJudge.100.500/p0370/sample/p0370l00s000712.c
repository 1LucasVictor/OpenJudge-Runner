#include <stdio.h>

int main(void) {
	int a, b;
	char ope;
	

	
	do{	scanf("%d %c %d", &a, &ope, &b);
	
		if(ope=='+')
		printf("%d\n", a+b);
		
		if(ope=='-')
		printf("%d\n", a-b);
		
		if(ope=='*')
		printf("%d\n", a*b);
		
		if(ope=='/')
		printf("%d\n", a/b);
		
	}while(a!=0 || b!=0 || ope!='?');	

	
	return 0;
}