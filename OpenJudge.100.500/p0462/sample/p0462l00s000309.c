#include <stdio.h>
int main(void){
    long a,ans;
    double b;
    scanf("%ld %lf",&a,&b);
    ans=a*(b*100);
    ans/=100;
    printf("%ld",ans);
}
