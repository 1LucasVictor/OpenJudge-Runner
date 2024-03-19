#include <stdio.h>
int main(void){
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(b>c){int m=a>c?a:c,n=b>d?d:b;printf("%d",n-m);}
	else{printf("0");}
	return 0;
}