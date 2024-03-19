#include <stdio.h>
void swap(long int *x,long int *y){
	long int tmp;
	tmp=*x;
	*x=*y;
	*y=tmp;
	}
long int gcd(long int x,long int y){
	if(x<y) swap(&x,&y);
	if(x%y!=0) return gcd(y,x%y);
	return y;
	}
int main(){
	long int a,b,c;
	scanf("%ld %ld",&a,&b);
	c=gcd(a,b);
	printf("%ld\n",c);
	return 0;
	}

