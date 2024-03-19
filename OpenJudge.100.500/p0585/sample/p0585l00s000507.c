#include<stdio.h>
int main()
{
    int a,b,t;
    int k=0;
    scanf("%d%d%d",&a,&b,&t);
    t=t+0.5;
    k=t/a;
	printf("%d\n",k*b);
	return 0;
}