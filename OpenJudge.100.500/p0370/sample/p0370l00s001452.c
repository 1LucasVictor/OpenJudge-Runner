#include<stdio.h>
int main() {
	int a, b, kai;
	char op;
	while(1){
		scanf("%d %c %d", &a, &op, &b);
		if(op=='?'){
			break;
		}else if(op=='+'){
			kai = a + b;
			printf("%d\n", kai);
		}else if(op=='-'){
			kai = a - b;
			printf("%d\n", kai);
		}else if(op=='*'){
			kai = a * b;
			printf("%d\n", kai);
		}else if(op=='/'){
			kai = a / b;
			printf("%d\n", kai);
		}
	}
}
