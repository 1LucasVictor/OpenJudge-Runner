#include <stdio.h>

int main(){
    int a, b, c, d=0;
    scanf("%d%d%d", &a,&b,&c);
    if(a>=100){ d++;}
    if(b%100>=10){ d++;}
    if(c%100<0) {d++;}
    printf("%d", d);

    return 0;
}