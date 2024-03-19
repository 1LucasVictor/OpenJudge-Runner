#include <stdlib.h>
#include <stdio.h>

void main(){
	int a, b;
	char op;

	while(1){
		scanf("%d %c %d", &a, &op, &b);

		if(op == '?'){
			break;
		}
		else{
			switch(op){
				case '+':
				printf("%d\n", a + b);
				break;

				case '-':
				printf("%d\n", a - b);
				break;

				case '*':
				printf("%d\n", a * b);
				break;

				case '/':
				printf("%d\n", a / b);
				break;
			}
		}
	}

}
