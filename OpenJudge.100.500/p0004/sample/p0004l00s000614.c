#include<stdio.h>
int main(){
	long long n,k,a,b,x,y,z;
	while(scanf("%lld %lld",&n,&k)!=EOF){
		if(n<k){a=n;b=k;}
		else{a=k;b=n;}
		x=b%a;
		while(x!=0){
			b=a;
			a=x;
			x=b%a;
		}
		x=a;
		printf("%lld %lld\n",x,n*k/x);
	}
	return 0;
}

