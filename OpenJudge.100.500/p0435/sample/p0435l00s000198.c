#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int n;
    long int d, dqd;
    scanf("%d", &n);
    scanf("%ld", &d);
    long int x[n], y[n];
    int cnt=0;
    for(int i=0;i<n;i++){
        long int sqrt;
        scanf("%ld", &x[i]);
        scanf("%ld", &y[i]);
        sqrt=x[i]*x[i]+y[i]*y[i];
        if(sqrt <= d*d){
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}