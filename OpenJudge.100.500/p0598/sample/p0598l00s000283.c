#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    //%d 整数　%f 浮動小数　s% 文字列 %c もじ
    // atoi(): s->i 
    // atof(): i->s include <stdlib>
    // scanf():入力
    //strlen():文字列の長さを返す include <string.h>
    int a, b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d\n", b%a==0 ? a+b:b-a );

    return 0;
}