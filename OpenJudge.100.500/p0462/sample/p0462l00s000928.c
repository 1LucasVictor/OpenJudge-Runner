#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
int main(){
    double a,b,ans;
    scanf("%lf %lf",&a,&b);
    ans=a*b;
    ans=floor(ans);
    if(a<0.001 || b<0.001){
        printf("0");
        return 0;
    }
    printf("%0.lf",ans);
    return 0;
}