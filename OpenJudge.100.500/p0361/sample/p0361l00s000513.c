#include <stdio.h>
int main(){
	int a,b,c,d;
	scanf("%d",&a);
	b=a/60;
	c=a%60;
	d=a/3600;
	b=b%60;
	printf("%d:%d:%d\n",d,b,c);
	return 0;
}
