#include<stdio.h>

main(){
	int time, s, m, h;
	
	scanf("%d",&time);
	
	s=time%60;
	time/=60;
	
	m=time%60;
	
	h=time/60;
	
	
	printf("%d:%d:%d\n",h,m,s);
	return 0;
}