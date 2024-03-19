#include<stdio.h>

int main(void){
	int S;
	int h,m,s;
	scanf("%d",&S);
	h=S/3600;
	m=(S-3600*h)/60;
	if(m>=60){
		m=59;
	}
	s=(S-3600*h-m*60)%60;
	if(s>=60){
		s=59;
	}
	printf("%d:%d:%d\n",h,m,s);
	
	return 0;
}