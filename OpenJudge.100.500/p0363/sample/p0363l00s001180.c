#include<stdio.h>
int main(void){
	int a,b,c,t;
	scanf("%d %d %d",&a,&b,&c);
	if(b<a){
		t=a;
		a=b;
		b=t;
	}
	if(c<b){
		t=b;
		b=c;
		c=t;
	}
	if(b<a){
		t=a;
		a=b;
		b=t;
	}
	printf("%d %d %d\n",a,b,c);
	return 0;
}