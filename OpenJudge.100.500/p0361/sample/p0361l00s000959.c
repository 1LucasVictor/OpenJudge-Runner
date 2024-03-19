#include<stdio.h>

int main(void){
int a,h,m,s;
scanf("%d",&a);
s=a%60;
m=(a/60)%60;
h=a/60/60;
printf("%d:%d:%d\n",h,m,s);
	return 0;
}