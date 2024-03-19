#include <stdio.h>
int n;
int main()
{
	int a[10],r;
	while(~scanf("%d",&r))if(!r)printf("%d\n",a[--n]);else a[n++]=r;
	return 0;
}