#include<stdio.h>


int main(void){
    int a,b,t;
    int rest, biscuit=0, plustime=1;

    scanf("%d %d %d", &a, &b, &t);
    rest = t;
    while(rest >= a*plustime){
        biscuit += b;
        plustime ++;
    }
    printf("%d\n", biscuit);
    return 0;
}