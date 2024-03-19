#include <stdio.h>

int main(void)
{
	int a, b;
	char s;

	while(1){
		scanf("%d%s%d", &a,&s,&b);
		if(s == '?')
			break;
		if(s == '+')
			printf("%d\n", a+b);
		if(s == '-')
			printf("%d\n", a-b);
		if(s == '*')
			printf("%d\n", a*b);
		if(s == '/')
			printf("%d\n", a/b);
	}
	return 0;
}