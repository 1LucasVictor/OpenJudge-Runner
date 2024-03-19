#include <stdio.h>
#include <math.h>

int main() {
long x,y,cnt=0;
scanf("%ld %ld",&x,&y);
while(x--){
    long p,q;
    scanf("%ld %ld",&p,&q);
    double ans;
    ans=sqrt((p*p)+(q*q));
   // printf("%lf ",ans);
    if(ans<=y) cnt++;
}
printf("%ld",cnt);
    return 0;
}