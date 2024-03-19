#include <stdio.h>
#include <string.h>
#include <math.h>
int main(void){
	int a,b,s;
	char c;
	while(1){
		scanf("%d %c %d",&a,&c,&b);
		if(c=='?') return 0;
		if(c=='+'){
			s=a+b;
		}else if(c=='-'){
			s=a-b;
		}else if(c=='*'){
			s=a*b;
		}else if(c=='/'){
			s=a/b;
		}
		printf("%d\n",s);
	}
	
	return 0;
}
