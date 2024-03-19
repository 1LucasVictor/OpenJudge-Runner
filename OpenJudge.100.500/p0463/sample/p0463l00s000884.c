#include<stdio.h>
int main(void)
{
    int n,m;
    scanf("%d",&n);
    m=n%10;
    if(m==3)
        printf("bon\n");
    else if((m==0)||(m==1)||(m==6)||(m==8))
        printf("pon\n");
    else 
        printf("hon\n");
    return 0;
}