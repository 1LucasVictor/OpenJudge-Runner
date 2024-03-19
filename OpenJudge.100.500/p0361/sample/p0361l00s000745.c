#include <stdio.h>
int main(void){
    int a,b,c,d;
    scanf("%d",&a);
    d = a%60;
    c = (a-d)/60;
    b = c;
    c %= 60;
    b -= c;
    b /= 60;
    printf("%d:%d:%d\n",b,c,d);
    return 0;
}
