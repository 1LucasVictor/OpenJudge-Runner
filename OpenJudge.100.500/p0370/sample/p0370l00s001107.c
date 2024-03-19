#include<stdio.h>

int main(){
	int a, b;
	char op;
	while(1){
		int pin = 0;
		scanf("%d %c %d\n",&a,&op,&b);
		switch(op){
			case '?':
				pin = 1;
				break;
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
		}
		if(pin==1) break;
	}
	return 0;
}
