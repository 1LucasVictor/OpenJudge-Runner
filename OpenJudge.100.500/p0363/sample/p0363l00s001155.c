#include <stdio.h>
int main(){
	int a,b,c,s;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
	s=b;
	b=a;
	a=s;
	}
	if(a>c){
		s=c;
		c=a;
		a=s;
	}
	if(b>c){
		s=c;
		c=b;
		b=s;
	}
	printf("%d %d %d\n",a, b, c);
}
	
	