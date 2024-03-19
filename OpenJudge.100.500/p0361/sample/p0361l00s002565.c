#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d",&a);
    int h , m , s;
    h = a / 3600;
    m = a % 3600 / 60;
    s = a % 3600 % 60 % 60;
    
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
