#include <stdio.h>

int main(void)

{	
	int a,a2,b,b2,c,d,r;
	while (scanf("%d %d",&a2,&b2)!= EOF) {
	
	a = a2 ;
	b = b2 ;
	if(a2<b2){
	c = a2 ;
	a2 = b2 ;
	b2 = c ;}
	
	r = a2 % b2;
		while(r!=0){
		r = a2 % b2 ;
		a2 = b2 ;
		b2 = r ;
	}
	
	d = a/a2*b;
	printf("%d %d\n", a2,d);
	}
	return 0;
}