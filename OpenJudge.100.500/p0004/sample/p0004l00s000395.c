#include <stdio.h>

#define swap(a,b) {long tmp=a;a=b;b=tmp;}

long gcm(long m, long n){
	long newm,newn;
	if(n==0)return m;
	newn = m%n;
	newm = n;
	return gcm(newm,newn);
}

int main(){
	long a,b;
	long g,l;
	while(scanf("%ld %ld", &a,&b)!=EOF){
		if(a<b)swap(a,b);
		g = gcm(a,b);
		l = a/g*b;
		printf("%d %d\n",g, l);
	}
	return 0;
}