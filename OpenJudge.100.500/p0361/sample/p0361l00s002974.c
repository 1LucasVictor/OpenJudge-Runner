#include<stdio.h>
int main(){
	int S,h,m,s,a;
	scanf("%d",&S);
	h = S/3600;
	m = S/60-60*h;
	a = S/60;
	s = S-60*a;
	printf("%d:%d:%d\n",h,m,s);
	return 0;
}