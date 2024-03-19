#include <stdio.h>

int main(){
    int a, b, c, d=0;
    scanf("%d", &a);
    if(a>=100){ d++;}
    if(a%100>=10){ d++;}
    if(a%100<10) {d++;}
    printf("%d", d);

    return 0;
}