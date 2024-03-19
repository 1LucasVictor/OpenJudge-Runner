#include <stdio.h>

int main(void)
{
	int a, b, flg = 0;
	char op;
	
	while(flg == 0){
		scanf("%d %c %d", &a, &op, &b);
		switch(op){
			case '+': printf("%d\n", a+b); break;
			case '-': printf("%d\n", a-b); break;
			case '*': printf("%d\n", a*b); break;
			case '/': printf("%d\n", a/b); break;
			case '?': flg = 1; break;
		}
	}
	
	return(0);
}

