#include <stdio.h>
int main() {
	int a;
	scanf("%d",&a);
	printf("%d:%d:%d\n",a/3600,a/60%60,a%60);
	return 0;
}
