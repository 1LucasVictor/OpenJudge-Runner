#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 200000
#define STRLEN 20

int main(void){
    long long x,y, n, d, count=0;
    scanf("%lld %lld", &n, &d);
    for(int i=0;i<n;i++){
        scanf("%lld %lld", &x,&y);
        if(x*x + y*y <= d*d )
        count++;
        x=y=0;
    }
    printf("%lld\n", count);
    return 0;
}
