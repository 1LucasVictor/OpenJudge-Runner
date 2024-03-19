#include <stdio.h>
int rishi(int n,int a){
	int a1;
	if(n>0){
		a=a*1.05;
		a1=a%1000;
		if(a1!=0){
			a=a-a1+1000;
		}
		n=n-1;
		return (rishi(n,a));
	}
	else{
		return a;
	}
}
int main(void) {
	int n,a=100000;
	scanf("%d",&n);
	printf("%d\n",rishi(n,a));
	return 0;
}
