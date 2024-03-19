#include<stdio.h>

int main(void){
	
	int s1,h,m,s2;
	scanf("%d",&s1);
	h = (int)(s1/3600);
	m = (int)((s1%3600)/60);
	s2 = s1-3600*h-m*60;
	printf("%d:%d:%d\n",h,m,s2);
	return 0;
}