#include<stdio.h>

int main(){
	int a,b,c,x;
	scanf("%d %d %d", &a,&b,&c);
	
	if (b<a) {
		x = a;
		a = b;
		b = x;
	}
	if (c<b) {
		x = b;
		b = c;
		c = x;
	}
	if (b<a) {
		x = a;
		a = b;
		b = x;
	}
	printf("%d %d %d\n",a,b,c);
	return 0;
}
