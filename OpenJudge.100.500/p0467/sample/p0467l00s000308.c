#include <stdio.h>
int main(void){
    int a,b,c,k;
    int i;
    int co = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &k);
    for(i = k;i > 0;i --){
        if(a > 0){
            co ++;
            a --;
        }else if(b > 0){
            b --;
        }else{
            co --;
            c --;
        }
    }
    printf("%d\n", co);
    return 0;
}