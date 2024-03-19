#include<stdio.h>

int main(){
	int S,h,m,s;
	scanf("%d",&S);
	if(S>3600){
		m = S/60;
		s = S%60;
		h = m/60;
		m = m%60;
		printf("%d:%d:%d\n",h,m,s);
	}
	else{
		m = S/60;
		s = S%60;
		printf("%d:%d\n",m,s);
	}
}
