#include <stdio.h>

int main(void){
	int a,b,r;
	char c;
	c='1';
	while(c!='?'){
		scanf("%d %c %d",&a,&c,&b);
		switch(c){
			case '+':r = a+b;break;
			case '-':r = a-b;break;
			case '*':r = a*b;break;
			case '/':r = a/b;break;
			case '?':break;
		}
		if(c != '?')printf("%d\n",r);
	}
	return 1;
}