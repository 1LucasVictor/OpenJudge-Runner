#include<stdio.h>
long long GCD(long long a,long long b);
long long LCM(long long a,long long b); 
int main(){
	long long a,b,G,L;
	while(scanf("%lld%lld",&a,&b)!=EOF){
		G=GCD(a,b);
		L=LCM(a,b);
		printf("%lld %lld\n",G,L);
	}
}
long long GCD(long long a,long long b){
	long long c=1;
	while(c!=0){
		c=a%b;
		a=b;
		b=c;
	}
	return a;
}
long long LCM(long long a,long long b){
		long long c,n,i=2;
	if(a>b){
		c=a;
		a=b;
		b=c;
	}
	n=a*i;
	while(n%b!=0){
		i=i+1;
		n=a*i;
	}
	return n;
}

