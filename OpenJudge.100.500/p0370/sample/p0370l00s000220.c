#include<stdio.h>
int main(void){
	int a,b,sol;
	char op;
	
	while(op!='?'){
		scanf("%d %c %d",&a,&op,&b);

		if(op=='+')sol=a+b;
		if(op=='-')sol=a-b;
		if(op=='*')sol=a*b;
		if(op=='/' && b!=0)sol=a/b;
		
		if(op=='+' || op=='-' || op=='*'||(op=='/' && b!=0))printf("%d\n",sol);
	}
	return 0;
}