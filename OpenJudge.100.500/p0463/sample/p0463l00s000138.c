#include <stdio.h>
#include <math.h>
int main(void)
{
    int a,s;
    scanf("%d",&a);
    s=a%10;
    if(s==3)
        printf("bon\n");
    else if((s==0)||(s==1)||(s==6)||(s==8))
        printf("pon\n");
    else
        printf("hon\n");
    return 0;
}
