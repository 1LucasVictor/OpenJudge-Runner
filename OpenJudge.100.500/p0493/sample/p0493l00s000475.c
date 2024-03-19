#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
    long int n;
    long int i,j;
    long int ans=0;


    scanf("%ld",&n);

    i=n/500;
    j=n%500/5;

    ans = i*1000+j*5;

    printf("%ld",ans);





	return 0;
}
