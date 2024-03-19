#include<stdio.h>

int main(void){
	int S,h,m,s;
	scanf("%d",&S);
	if("0<=S<86400"){
		s=S%60;
		m=(S-s)%3600/60;
		h=(S-s-60*m)/3600;
		printf("%d:%d:%d\n",h,m,s);
	}
	return 0;
}