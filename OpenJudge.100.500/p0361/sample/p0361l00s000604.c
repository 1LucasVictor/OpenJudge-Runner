#include<stdio.h>

int main(void){
	int h,m,s = 0;
	scanf("%d",&s);
	if(0 <= s && s < 86400){
		h = s/3600;
		s = s%3600;
		m = s/60;
		s = s%60;
		printf("%d:%d:%d\n",h,m,s);
	}
	return 0;
}
