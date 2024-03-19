#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main(void){
	int a,b;

	scanf("%d",&a);
	scanf("%d",&b);

	puts((a<=8&&b<=8)?"Yay!":":(");
	return 0;
}
