#include <stdio.h>

int main(void)
{
    int s;
    int c=0;
    scanf("%d",&s);
    if(s/100==1)
        c++;
    if((s/10)%10==1)
        c++;
    if(s%10==1)
        c++;
    printf("%d\n",c);
    return 0;
}
