#include <stdio.h>
int main(){
	char a[3];
	printf("%d", ((scanf("%s", a), a[0]+a[1]+a[2]-3*'0')));
}