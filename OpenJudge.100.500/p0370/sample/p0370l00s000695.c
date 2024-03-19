#include <stdio.h>

int main(void) {
	int a, b;
	char op;
	while(1){
		//数値2つを演算子を入力
		scanf("%d %c %d", &a, &op, &b);
		//演算子に沿った答えを出力
		if(op == '+'){
			printf("%d\n", a + b);
		}else if(op == '-'){
			printf("%d\n", a - b);
		}else if(op == '*'){
			printf("%d\n", a * b);
		}else if(op == '/'){
			printf("%d\n", a / b);
		}else{
			break;
		}
	}
	return 0;
}