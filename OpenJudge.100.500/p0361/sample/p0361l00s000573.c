#include<stdio.h>
int main(){
	int h,m,s;
	scanf("%d",&s);
	h=s/3600;
	m=s%3600;
	s=m%60;	
	m=m/60;
	printf("%d:%d:%d\n",h,m,s);
	return 0;
}