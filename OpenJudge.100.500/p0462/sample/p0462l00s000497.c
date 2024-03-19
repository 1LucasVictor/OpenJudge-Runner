#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
int main(){
    double a,b,ans;
    scanf("%lf %lf",&a,&b);
    b*=100;
    ans=a*b/100;
    ans=floor(ans);
    printf("%0.lf",ans);
    return 0;
}