#include <stdio.h>

int main(void) {
	int a[100], n, i;
	scanf("%d", &n);
	for(i=0;i<n;i++)scanf("%d",a+i);
	while(--n)printf("%d ",a[n]);
	printf("%d\n",*a);
	return 0;
}