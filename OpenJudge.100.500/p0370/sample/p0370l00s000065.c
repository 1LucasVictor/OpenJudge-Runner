#include <stdio.h>

int main(void)
{
	int a,b,t;
	char op[2];
	for(;;){
		scanf("%d%s%d",&a,op,&b);
		t=*op=='+'?a+b:*op=='-'?a-b:*op=='*'?a*b:*op=='/'?a/b:0;
		if(*op=='?')break;
		printf("%d\n",t);
	}
	return 0;
}
