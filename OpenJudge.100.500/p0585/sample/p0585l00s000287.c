#include<stdio.h>
int main(void)
{
	int a, b, t, all; 
	scanf("%d %d %d",&a, &b, &t);
	
	all = t/a;
	printf("%d",(t/a)*b);
	return 0;
}