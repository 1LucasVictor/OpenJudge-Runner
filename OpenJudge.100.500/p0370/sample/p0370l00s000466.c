#include<stdio.h>
int main(void)
{
	char op;
	int a,b;
	do{
	scanf("%d %c %d",&a,&op,&b);
	if(0<=a && b<=20000){
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
	}
	}while(op!='?');
return 0;
}