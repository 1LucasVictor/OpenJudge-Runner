#include <stdio.h>

int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！

    int x;
    int a,b;
    scanf("%d",&x);

    a=x/500 * 1000;
    b=x%500 /5 *5;

    printf("%d\n",a+b);

    
    return 0;
}