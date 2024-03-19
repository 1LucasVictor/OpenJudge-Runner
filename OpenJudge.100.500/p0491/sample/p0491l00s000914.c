#include<stdio.h>


int main(){
	long long n, k, eq=0, eq2=0;
	scanf("%lld %lld", &n, &k);
	if(n<k)
		printf("%lld", n);
	else if (n%k==0)
		printf("0");
	else if(n<k){
		eq= k-n;
		if(eq>n)
			printf("%lld", eq);
		else
			printf("%lld", n);
	}
	else{
		eq2= n%k;
		printf("%lld", k-eq2);
	}
	printf("\n");
    return 0;
}