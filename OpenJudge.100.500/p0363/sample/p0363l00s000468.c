#include <stdio.h>

int main(void)
{
    int a, b, c, num;
    scanf("%d %d %d", &a, &b, &c);

    if(a > b){
        num = a;
        a = b;
        b = num;
    }
    if(b > c){
        num = b;
        b = c;
        c = num;
    }
    if(a > b){
        num = a;
        a = b;
        b = num; 
    }
    printf("%d %d %d\n", a, b, c);

    return 0;
}
