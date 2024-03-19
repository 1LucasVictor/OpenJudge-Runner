#include<stdio.h>
int main(){
	int a,b;
	char op;
	while(1){
	scanf("%d %c %d",&a,&op,&b);
	if(op=='?')break;
	printf("%d\n",op=='+'?a+b:op=='-'?a-b:op=='*'?a*b:a/b);
	}
}