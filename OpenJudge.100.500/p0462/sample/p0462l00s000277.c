#include <stdio.h>


#define MAXLEN 1000000000000000000

int main(){
    double  a,b;
    unsigned long long int ans;

    scanf("%le%le",&a,&b);

    ans=a*b;
    printf("%llu",ans);
    return 0;
}