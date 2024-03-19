#include<stdio.h>
int main() {
	int a,b,c,k;
	scanf("%d %d %d %d",&a,&b,&c,&k);
	if (a+b>=k)
		printf("%d\n",a);
	else if (a+b<k)
		printf("%d\n",2*a+b-k);
	return 0;
}
