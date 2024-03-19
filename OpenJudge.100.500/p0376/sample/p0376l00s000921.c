#include <stdio.h>
int main(void){
	int a[100], n, i;
	int *p = a;
	scanf("%d",&n);
	for(i=0;i++<n;)
		scanf("%d",p++);
	while(--n)
		printf("%d ",*--p);
	printf("%d\n",*a);
	return 0;
}