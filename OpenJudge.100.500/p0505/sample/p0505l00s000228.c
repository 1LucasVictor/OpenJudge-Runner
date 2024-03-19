#include<stdio.h>

int main()
{
	long long int H,sum=0;
	long long int N,A[10000];
	scanf("%lld %lld",&H,&N);
	for(int i =0; i<N; i++)
    {
        scanf("%lld",&A[i]);
        sum+=A[i];
    }
    if(sum>=H)
        printf("Yes");
    else
        printf("No");
}
