#include <stdio.h>

int main(void){
    int ls,h,m,s;
    scanf("%d",&ls);
    h = ls / 3600;
    m = ls % 3600 / 60;
    s = ls % 60;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
