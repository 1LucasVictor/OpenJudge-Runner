#include <stdio.h>

int main(void){
	int a,b,answer,br=0;
	char op;
	while(1){
		scanf("%d %c %d",&a,&op,&b);
		
		switch(op){
		case '+':
			answer = a + b;
			break;
		case '-':
			answer = a - b;
			break;
		case '*':
			answer = a * b;
			break;
		case '/':
			answer = a / b;
			break;
		case '?':
			br = 1;
			break;
		}
		
		if(br != 1){
			printf("%d\n",answer);
		}else{
			break;
		}
	}
	
	return 0;
}