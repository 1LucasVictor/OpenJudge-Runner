#include <stdio.h>

int a, b;

int main(){
	scanf("%d", &a);
	for(int i=1; a%10!=0; i++){
		a=a-1;
		b=i;
	}
	if(b==3)printf("bon");
	else if ((b==0) || (b==1) || (b==6) || (b==8)) printf("pon");
	else printf("hon");
	return 0;
}