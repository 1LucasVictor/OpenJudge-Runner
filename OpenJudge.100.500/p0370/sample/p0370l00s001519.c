#include <stdio.h>
int main(void)
{
	int a,b;
	char c;
	while(1){
		scanf("%d %c %d", &a, &c, &b);
		if( c=='?')break;	
		else if( c=='-'){
			printf("%d\n",a-b);
		}else if( c=='*'){
			printf("%d\n",a*b);
		}else if( c=='/'){
			printf("%d\n",a/b);
		}else if( c=='+'){
			printf("%d\n",a+b);
		}
	}
	return 0;
}
