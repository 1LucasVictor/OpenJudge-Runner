#include<stdio.h>
int main(void){
	int i,t,m=100000;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		m=m+m*5/100;
		if(m%1000!=0){
			m=m+(1000-m%1000);
		}
	}
	printf("%d\n",m);
	return 0;
}
