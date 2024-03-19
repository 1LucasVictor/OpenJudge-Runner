#include<stdio.h>
int main(void)
{
	int a,b;
	char c, p;
	do{
		scanf("%d ",&a);
		scanf("%c",&c);
		scanf(" %d",&b);
		switch(c){
		case '-':
			printf("%d\n",a-b);
			break;
		case '+':
			printf("%d\n",a+b);
			break;
		case '*':
			printf("%d\n",a*b);
			break;
		case '/':
			printf("%d\n",a/b);
			break;
		case '%':
			printf("%d\n",a%b);
			break;
		default:
			break;
		}
	}while(c!='?');
	return 0;
}