#include<stdio.h>

int gcd(int a,int b){
	int t;
	if (b>a){
		t=a;
		a=b;
		b=t;
	}
	while(b!=0){
		t=b;
		b=a%b;
		a=t;
	}
	return a;
}
int lcm(int a,int b){
	int t,inc=a,dst;
	if (b>a){
		t=a;
		a=b;
		b=t;
		inc=a;
	}
	for(;;){
		if(a%b==0){
			dst=a;
			break;
		}
		a+=inc;
	}
	return dst;
}
int main(){
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){
		printf("%d %d\n",gcd(a,b),lcm(a,b));
	}
	return 0;
}