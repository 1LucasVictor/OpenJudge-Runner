#include<stdio.h>

int main(void) {

	int a, b,ans;
	char op;

	while (1) {

		scanf("%d %c %d", &a, &op, &b);

		if (op == '?')
			break;

		switch (op) {

		case '+':
			ans = a + b;
			printf("%d\n", ans);
			break;
		case '-':
			ans = a - b;
			printf("%d\n", ans);
			break;
		case '*':
			ans = a * b;
			printf("%d\n", ans);
			break;
		case '/':
			ans = a / b;
			printf("%d\n", ans);
			break;
		}

	}



	return(0);

}
