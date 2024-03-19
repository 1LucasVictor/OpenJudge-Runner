#include <stdio.h>

int x(int a, int b, int op){
	int n, re;

	switch(op){
	case '+' : n = a + b; printf("%d\n", n); re = 0; break;
	case '-' : n = a - b; printf("%d\n", n); re = 0;break;
	case '*' : n = a * b; printf("%d\n", n); re = 0; break;
	case '/' : n = a / b; printf("%d\n", n); re = 0; break;
	case '?' : re = 1; break;
	}

	return re;
}

int main(void){
	int a, b, op, n, re;

	do{
	scanf("%d ", &a);
	op = getchar();
	scanf(" %d\n", &b);
	
	re = x(a, b, op);
	} while (re != 1);

	return 0;
}