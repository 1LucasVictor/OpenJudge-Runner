#include <stdio.h>

int main(void) {
	while(1){
		int a,b;
		char op;
		scanf("%d %c %d",&a,&op,&b);
		switch(op){
			case '+':
			printf("%d\n",a+b);
			break;
			case '-':
			printf("%d\n",a-b);
			break;
			case '*':
			printf("%d\n",a*b);
			break;
			case '/':
			printf("%d\n",a/b);
			break;
			case '?':
			return 0;
		}
	}
	return 0;
}