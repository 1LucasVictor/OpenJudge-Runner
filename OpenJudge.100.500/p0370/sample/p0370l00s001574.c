#include<stdio.h>
int main(void)
{
	int a, b;
	char op;
	do{
		scanf("%d %c %d", &a, &op, &b);
		switch(op){
			case '+': printf("%d\n",a+b);
				break;
			case '-': printf("%d\n",a-b);
				break;
			case '*': printf("%d\n",a*b);
				break;
			case '/': printf("%d\n",a/b);
				break;
		}
	}while(op!='?');
	
	return 0;
}