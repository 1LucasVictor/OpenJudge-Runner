#include <stdio.h>

long fun(long a,long b){
	if(a==b){
		return a;
	}else if(a>b){
		return fun(a-b,b);
	}else{
		return fun(b-a,a);
	}
}
	

int main(){
	long a,b,c,d;
	while(scanf("%ld %ld",&a,&b)!=EOF){
		c = fun(a,b);
		d = (a*b)/c;

		printf("%ld %ld\n",c,d);
	}
	return 0;
}