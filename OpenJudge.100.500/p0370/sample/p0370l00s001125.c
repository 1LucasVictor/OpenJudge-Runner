#include <stdio.h>
int main(void)
{
	int a,b,c;
	char o;
	while(1){
		scanf("%d %c %d",&a,&o,&b);
		if(o=='?'){
			break;
		}
		if(o=='+'){
			c=a+b;
		}
		else if(o=='-'){
			c=a-b;
		}
		else if(o=='*'){
			c=a*b;
		}
		else if(o=='/'){
			c=a/b;
		}
		printf("%d\n",c);
	}
	return 0;
}
