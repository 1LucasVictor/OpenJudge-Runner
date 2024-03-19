#include <stdio.h>

int main(void){
    int a,b,c,q,cnt = 0;
    scanf("%d %d %d",&a,&b,&c);
    q = a;
    while(q <= b){
        if(c % q == 0)cnt++;
        q++;
    }
    printf("%d\n",cnt);
}
