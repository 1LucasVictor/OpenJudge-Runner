#include <stdio.h>
int main(void)
{
    int S,h,m,s;
    scanf("%d\n",&S);
    h=(S-S%3600)/3600;
    m=((S-h*3600)-((S-h*3600)%60))/60;
    s=S-h*3600-m*60;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
