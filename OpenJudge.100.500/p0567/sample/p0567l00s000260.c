#include<stdio.h>
int main()
{
    int a,b,c,can_hold,bottle2_remain;
    scanf("%d%d%d",&a,&b,&c);
    can_hold=a-b;
    bottle2_remain=c-can_hold;
    if(bottle2_remain<1)
        printf("0\n");
    else
        printf("%d\n",bottle2_remain);
    return 0;
}
