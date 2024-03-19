#include<stdio.h>

int main(void){
	char a[3];
	int total=0;
	scanf("%s",a);
	if(a[0]!=a[1]||a[1]!=a[2])total++;
	if(total==0)printf("No");
	else printf("Yes");
	return 0;
}