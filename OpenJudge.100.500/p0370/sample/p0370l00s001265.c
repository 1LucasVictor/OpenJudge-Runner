#include <stdio.h>

int main(void){
	int a,b;
	char op;
	while(scanf("%d %s %d",&a,&op,&b)==3){
		if(op == '?') break;
	switch(op){
	case '+' :{
		printf("%d\n",a+b);
		break;
			  }
	case '-' :{
		printf("%d\n",a-b);
		break;
			  }
	case '*' :{
		printf("%d\n",a*b);
		break;}
	case '/' :{
		printf("%d\n",a/b);
		break;
			  }
	}
	}
	return 0;
}