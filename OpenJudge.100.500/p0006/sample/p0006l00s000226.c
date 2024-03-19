#include<stdio.h>
n;int main(){
	int m=100000;
	scanf("%d",&n);
	for(;n>0;n--){
		m*=1.05;
		m+=m%1000?1000-m%1000:0;
	}
	printf("%d\n",m);
	exit(0);
}