#include <stdio.h>

long A,B,C,K;

int main()
{
    scanf("%ld %ld %ld %ld",&A,&B,&C,&K);
    if(K<=A)
	printf("%ld\n",K);
    else if(A<K && K<=A+B)
	printf("%ld\n",A);
    else
	printf("%ld\n",A-(K-A-B));
    return 0;
}

