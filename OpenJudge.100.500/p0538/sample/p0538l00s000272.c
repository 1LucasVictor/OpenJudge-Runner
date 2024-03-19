#include<stdio.h>
int main()
{
	int a,b;

	scanf("%d%d",&a,&b);

	printf("%d",0<a&&a<10&&0<b&&b<10?a*b:-1);
	return 0;
}