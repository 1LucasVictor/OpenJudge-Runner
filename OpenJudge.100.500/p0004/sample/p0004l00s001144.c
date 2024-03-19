#include <stdio.h>

int yakusuu(int a,int b);

int main(void){
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){
		printf("%d %d\n",yakusuu(a,b),(a/yakusuu(a,b)*b));
	}
	return 0;
}

int yakusuu(int a,int b){
	int n=2,c=1;
	while(n<=a && n<=b){
		if(a%n==0 && b%n==0){
			a/=n;
			b/=n;
			c*=n;
		}
		else{
			n++;
		}
	}
	return c;
}