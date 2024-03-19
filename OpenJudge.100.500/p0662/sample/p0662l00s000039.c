#include <stdio.h>
int main(void){
	int a1,a2,b1,b2;
	scanf("%d %d %d %d",&a1,&a2,&b1,&b2);
	if(a2>b1){printf("%d",a2<b2?a2-b1:b2-b1);}
	else{printf("0");}
	return 0;
}