#include<stdio.h>
int main(){
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	if (0<a&&a<10&&0<b&&b<10)
		printf("%d\n",a*b);
	else
		puts("-1");
	return 0;
}