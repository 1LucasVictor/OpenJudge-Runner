#include <stdio.h>

int main(int a){
    scanf("%d", &a);
    if(1<=a && a <= 10)printf("%d\n", a+a*a+a*a*a);
    return 0;
}
