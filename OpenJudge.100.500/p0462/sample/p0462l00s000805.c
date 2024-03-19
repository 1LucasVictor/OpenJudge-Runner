#include <malloc.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

//ABC169C
int main(){
    long long a;
    long double  b;
    scanf("%lld %Lf",&a,&b);
    long double c=a*b;
    long long d = c;
    printf("%lld",d);

    return 0;
}
