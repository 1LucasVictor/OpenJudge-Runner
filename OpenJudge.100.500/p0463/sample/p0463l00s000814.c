#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    b=a%10;
    if(b==3)
        printf("bon\n");
    else if(b==0||b==1||b==6||b==8)
        printf("pon\n");
    else
        printf("hon\n");
    return 0;
}
