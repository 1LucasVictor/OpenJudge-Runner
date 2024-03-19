#include<stdio.h>
int main(void){
	int input,h,m,s;
	scanf("%d",&input);
	h=input/3600;
	m=input/60%60;
	s=input%60;
	printf("%d:%d:%d\n",h,m,s);

	return 0;
}