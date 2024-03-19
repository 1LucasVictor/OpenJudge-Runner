#include<stdio.h>

int main(){
	int n,b=100000;
	scanf("%d",&n);
	for(;n;n--){
		b*=1.05;
		if(b%1000!=0) b=(b+1000)/1000*1000;
	}
	printf("%d\n",b);
	return 0;
}