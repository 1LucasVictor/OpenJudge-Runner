#include <stdio.h>
int main(void) {
	// your code goes here
	int a,b;
	char c;
	while(1){
		scanf("%d %c %d",&a,&c,&b);
		if(c=='?'){
			break;
		}if(c=='+'){
			printf("%d\n",a+b);
		}if(c=='-'){
			printf("%d\n",a-b);
		}if(c=='*'){
			printf("%d\n",a*b);
		}if(c=='/'){
			printf("%d\n",a/b);
		}
	}
	return 0;

}
