#include <stdio.h>

int main(){
	int a, b, ans = 0;
	char op;

	while (1){//loop
		scanf("%d %c %d", &a, &op, &b);//入力

		if (op == '+'){
			ans = a + b;
		}else if (op == '-'){
			ans = a - b;
		}else if(op == '*'){
			ans = a * b;
		}else if (op == '/'){
			ans = a / b;
		}else if (op == '?'){
			break;
		}

		printf("%d\n", ans);

	}
	return 0;
}