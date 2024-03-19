#include<stdio.h>
int main(){
	int a,b;
	char c,d;
	scanf("%d%c%c%d",&a,&d,&c,&b);
	while(c=='+'||c=='-'||c=='*'||c=='/'){
		if(c=='+') printf("%d\n",a+b);
		else if(c=='-') printf("%d\n",a-b);
		else if(c=='*') printf("%d\n",a*b);
		else printf("%d\n",a/b);
		scanf("%d%c%c%d",&a,&d,&c,&b);
	}
	return 0;
}

