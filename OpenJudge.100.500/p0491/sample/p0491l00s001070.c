#include <stdio.h>
#include <stdlib.h>
int main(){
    long long n,k,x,y;
    scanf("%lli %lli", &n,&k);
    x = n%k; y = abs(x-k);
    if (x>y)
    printf("%lli\n",y);
    else
    printf("%lli\n",x );
}
