#include<stdio.h>
int main(void){
	int a, b;
	char op;
	
	do{
		scanf("%d %c %d", &a, &op, &b);
		switch(op){
			case '?':
			goto EXIT;
			case '+':
			printf("%d\n", a+b);
			break;
			case '-':
			printf("%d\n", a-b);
			break;
			case '*':
			printf("%d\n", a*b);
			break;
			case '/':
			printf("%d\n", a/b);
			break;
		}
	}while(1);
	
	EXIT:
	return 0;
}

