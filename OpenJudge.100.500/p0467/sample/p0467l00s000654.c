#include <stdio.h>
int main (void){
    int a, b, c, k;
    scanf("%d%d%d%d", &a,&b,&c,&k);

    if(k-a!=0){
        if(k-a-b!=0){
            printf("%d", a-c);
        }else printf("%d", a);
    }else printf("%d", k);
    return 0;
}