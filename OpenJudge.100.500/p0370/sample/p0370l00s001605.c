#include <stdio.h>

int main(void) {

	int a, b, ans;
	char op;
	
	while (scanf("%d %c %d", &a, &op, &b),op != '?'){
		switch (op){
			case '+':
				ans = a+b;
				break;
			
			case '-':
				ans = a-b;
				break;
				
			case '*':
				ans = a*b;
				break;
				
			case '/':
				ans = a/b;
				break;
		}
			
		printf("%d\n", ans);
		
	}
		
	return 0;
}