#include<stdio.h>
int main(void){
	long a,b,c,k;
	scanf("%ld %ld %ld %ld",&a,&b,&c,&k);
	if(k<=a+b&&k>=a) printf("%ld\n",a);
	else if(k<a) printf("%ld\n",k);
	else {
		printf("%ld\n",(k-(a+b))*(-1)+a);
	}
	return 0;
}