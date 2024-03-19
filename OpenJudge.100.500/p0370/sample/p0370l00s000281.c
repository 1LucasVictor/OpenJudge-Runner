#include<stdio.h>

int main(void){

		int a, b;
		char op;
		scanf("%d %c %d",&a,&op,&b);

		do{
			if (op == '+'){ printf("%d\n", a + b); }
			else if (op == '-'){ printf("%d\n",a-b); }
			else if (op == '*'){ printf("%d\n", a * b); }
			else if (op == '/'){ printf("%d\n", a / b); }
			else if (op == '?'){ break; }

			scanf("%d %c %d", &a, &op, &b);

		} while (op != '?');

	

	return 0;
}