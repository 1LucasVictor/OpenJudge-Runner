#include <stdio.h>
i,t=100000;
int main(void){
    for(scanf("%d",&i);i--;)
    t=(t+t/20+999)/1000*1000;
    printf("%d\n",t);
}