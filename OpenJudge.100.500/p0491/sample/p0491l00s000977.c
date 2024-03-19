#include<stdio.h>

int main(void)
{
	long n,k,copy;
	int i;

	scanf("%ld %ld",&n,&k);

	copy=n;

	while(1){
		if(copy-k<=0) break;
		copy-=k;
	}

	if(copy<k-copy){
		printf("%ld\n",copy);
	}
	else printf("%ld\n",k-copy);

	return 0;
}

