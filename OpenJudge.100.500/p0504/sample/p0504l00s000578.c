#include <stdio.h>
#define FOR(x,n) for(int i=(x);i<(n);i++)
int main(void){
    int mon,att=0;
    scanf("%i %i",&mon,&att);
    int c=0;
    while(1){
        mon-=att;
        c++;
        if(mon<=0) break;
    }
    printf("%i\n",c);
    return 0;
}
