#include <stdio.h>

int main()
{
	int a,b;
	char op;
	
	while (op != '?') {
		scanf("%d %c %d",&a,&op,&b);
		if (op == '+') {
			printf("%d\n",a+b);
		} else if (op == '-') {
			printf("%d\n",a-b);
		} else if (op == '*') {
			printf("%d\n",a*b);
		} else if (op == '/') {
			printf("%d\n",a/b);
		} else if (op == '?') break;
	}
	
	return 0;
}