#include <stdio.h>
#define DEBT 100000
#define INTEREST 0.05
#define ROUNDDEV 1000
int main(void){
    int w,i;
    long int result = DEBT;
    scanf("%d",&w);
    for(i=0;i<w;i++){
        result*=(INTEREST+1.0);
        result=((result+(ROUNDDEV-ROUNDDEV/10))/ROUNDDEV)*ROUNDDEV;
    }
    printf("%ld\n",result);
    
    return 0;
}