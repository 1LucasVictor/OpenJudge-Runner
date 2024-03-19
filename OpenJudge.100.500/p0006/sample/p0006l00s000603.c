#include<stdio.h>
int main(){
	int c,d,m=100000;
	scanf("%d",&d);
	for(c=0;c<d;c++){
		m*=1.05;
		m=(m%1000)?(m/1000+1)*1000:m;
	}
	printf("%d\n",m);
	return 0;
}