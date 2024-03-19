#include<stdio.h>

int main(void)
{
	int a,b,t,num,hoge;
	scanf("%d %d %d",&a,&b,&t);
	
	num = t / a;
	
	hoge = num * b;
	
	printf("%d",hoge);
	
	return 0;
}