#include <stdio.h>
#include <math.h>
main(){
    int d,n;
    scanf("%d %d",&d,&n);
    if(n==100)
        n=101;
    printf("%d\n",(int)pow(100,d)*n);
}