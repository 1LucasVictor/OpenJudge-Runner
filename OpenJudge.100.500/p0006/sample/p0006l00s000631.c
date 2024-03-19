#include<stdio.h>
int calc(int n);

int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",calc(n));
	return 0;
}

int calc(int n){
	int a;
	a=100000;
	for(;n>0;n--){
		a*=1.05;
		if(a%1000!=0){
			a=(a/1000+1)*1000;
		}
	}
	return a;
}