#include <stdio.h>

int main(){
	int a,b,c[200000];
	char op[2];

	while(1){
		scanf("%d %s %d",&a,op,&b);
		if(op[0]=='?'){
			break;
		}
		switch(op[0]){
		case '+':
			printf("%d\n",a+b);
			break;
		case '-':
			printf("%d\n",a-b);
			break;
		case '*':
			printf("%d\n",a*b);
			break;
		case '/':
			printf("%d\n",a/b);
			break;
		}
	}

	return 0;
}
