#include <stdio.h>

int main(){
	int time,h,m,s,c;
	scanf("%d",&time);
	if(time < 10) printf("%d\n",time);
	else {h=time/3600;
	c=time-h*3600;
	m=c/60;
	s=c-m*60;
	printf("%d:%d:%d\n",h,m,s);
	}
	return 0;
}

