#include <stdio.h>

int main(){
	int h,m,S,s,a;
	scanf("%d",&S);
	h=S/3600;
	a=S%3600;
	m=a/60;
	s=a%60;
	printf("%d:%d:%d\n",h,m,s);
	
	return 0;
}