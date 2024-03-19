#include <stdio.h>
int main(){
	int a,b,c,d,e;
	-1000<=a<=1000;
	-1000<=b<=1000;
	scanf("%d%d",&a,&b);
	c = a+b;
	d = a-b;
	e = a*b;
	if(d<c){
		(d=c);}
		if(d<e){
			(d=e);}
			printf("%d",d);
	return 0;
		}