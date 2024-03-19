#include <stdio.h>

int main(){
    long A;
    double B,buf;
    scanf("%ld %lf",&A,&B);
    buf = A*B;
    long ans;
    ans = buf;
    printf("%ld\n",ans);
    return 0;
}