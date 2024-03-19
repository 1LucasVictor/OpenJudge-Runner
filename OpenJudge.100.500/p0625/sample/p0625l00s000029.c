#include<stdio.h>
int main(void){
	int a,b;
	scanf("%d %d",&a,&b);
	if(a<9 && b<9)printf("Yay!\n");
	else printf(":(\n");
	return 0;
}