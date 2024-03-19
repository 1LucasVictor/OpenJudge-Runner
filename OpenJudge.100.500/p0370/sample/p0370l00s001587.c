#include<stdio.h>
int main(void)
{
	int a, b, x;
	char op;
	while(1){
		scanf("%d %c %d", &a, &op, &b);
		if(op=='?'){
			break;
		}
		if(op=='+'){
			x=a+b;
		}
		if(op=='-'){
			x=a-b;
		}
		if(op=='*'){
			x=a*b;
		}
		if(op=='/'){
			x=a/b;
		}
		printf("%d\n",x);
	}
			
	return 0;
}