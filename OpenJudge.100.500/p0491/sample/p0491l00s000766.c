#include <stdio.h>

int main() {
	long n,k;
	scanf("%ld%ld",&n,&k);
	if(n<=k){
	    if(k-n>n)
	        printf("%ld\n",n);
	    else
	        printf("%ld\n",k-n);
	}
	else{
	    n=n%k;
	    if(k-n>n)
	        printf("%ld\n",n);
	    else
	        printf("%ld\n",k-n);
	}
	return 0;
}