#include<stdio.h>

int main(void)
{
	int a,b,c,sat;

	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		sat=b;
		b=a;
		a=sat;
	}
	if(a>c){
		sat=c;
		c=a;
		a=sat;
	}
	if(b>c){
		sat=c;
		c=b;
		b=sat;
	}
	printf("%d %d %d\n",a,b,c);

	return 0;
}