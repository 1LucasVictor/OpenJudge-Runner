#include <stdio.h>
int main (void){
	char op;
	int a,b;
	while(1){
		scanf("%d %c %d",&a,&op,&b);
	if(op=='+'){
		printf("%d\n",a+b);
	}
	else if(op=='-'){
		printf("%d\n",a-b);
	}
	else if(op=='*'){
		printf("%d\n",a*b);
	}
	else if(op=='/'){
		printf("%d\n",a/b);
	}

	else{
		break;
	}
	}
	

	return 0;
}