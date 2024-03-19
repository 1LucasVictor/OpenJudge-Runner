#include <stdio.h>

int main(void) {
	int h,s,m;
	scanf("%d",&s);
	h=s/3600;
	m=(s%3600)/60;
	s=s%60;
	
	printf("%d:%d:%d\n",h,m,s);
	return 0;
}