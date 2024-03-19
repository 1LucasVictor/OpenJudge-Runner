#include <stdio.h>

void fun1(int second);

int main()
{
	int S;
	scanf("%d",&S);
	
	fun1(S);
	
	return 0;
}

void fun1(int second)
{
	int h,m,s;
	h=m=s=0;
	
	s = second%60;
	m = second/60%60;
	h = second/(60*60);
	
	printf("%d:%d:%d\n",h,m,s);
}