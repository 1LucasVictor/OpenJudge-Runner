#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int one=0;
    one=n%10;
    if(one==3)
    printf("bon\n");
    else if(one==0 || one==1 || one==6 || one==8)
    printf("pon\n");
    else
     printf("hon\n");
    return 0;
}