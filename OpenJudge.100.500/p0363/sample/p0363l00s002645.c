#include<stdio.h>
int main(void)
{
	int a,b,c,max;

	scanf("%d %d %d",&a,&b,&c);


	if(a>b){
		max=a;
		a=b;
		b=max;
	}
	if(b>c){
		max=b;
		b=c;
		c=max;
	}

	if(a>b){
		max=a;
		a=b;
		b=max;
	}

	printf("%d %d %d\n",a,b,c);

	return 0;
}
