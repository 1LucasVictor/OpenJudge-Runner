#include<stdio.h>
int main()
{
	int n,a,b;
	int t1,t2;
	scanf("%d %d %d",&n,&a,&b);
	t1 = n * a;
	t2 = b;
	if(t1>=t2)
		printf("%d\n",t2);
	else
		printf("%d\n",t1);
	return 0;
} 