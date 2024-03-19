#include<stdio.h>
int main(){
	int t,h,m,s;
	scanf("%d",&t);
	h=(int)t/3600;
	m=(int)t-3600*h;
	m=(int)m/60;
	s=(int)t-3600*h-60*m;
	printf("%d:%d:%d\n",h,m,s);
	return 0;
}