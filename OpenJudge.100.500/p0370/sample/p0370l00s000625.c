#include <stdio.h>
int main(void){
	char op;
	int a,b;
	while(1){
	scanf("%d %c %d", &a, &op, &b);
	int res;
		if(op=='+'){
			res = a+b;
		}else if(op=='-'){
			res = a-b;
		}else if(op=='*'){
			res = a*b;
		}else if(op=='/'){
			res = a/b;
		}else{
			break;
		}
		printf("%d\n",res);
	}
	return 0;
}