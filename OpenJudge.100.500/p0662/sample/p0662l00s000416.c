#include <stdio.h>

int main(){
	
	int a,b,c,d,aa,bb,s;
	
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	if(a>c){
		aa=a;
		bb=b;
		a=c;
		b=d;
		c=aa;
		d=bb;
	}
	
	if(c<=b&&b<=d)s=b-c;
	if(b<c)s=0;
	if(c<=b&&b>d)s=d-c;
	
	printf("%d\n",s);
	
	return 0;
}
