#include <stdio.h>

int main(){
	int a,b,ex,i;
	char op ;
	i=0;
	for (ex=0;i<1;){
	scanf("%d %c %d",&a,&op,&b);
		if (0<=a&&a<=20000&&0<=b&&b<=20000){
			if (op=='?'){
			break;
			}
			if (op=='+'){
			ex=a+b;
			}
			if (op=='-'){
			ex=a-b;
			}
			if (op=='*'){
			ex=a*b;
			}
			if (op=='/'){
			ex=a/b;
			}
			printf ("%d\n",ex);
		}
	}
	return 0;
}