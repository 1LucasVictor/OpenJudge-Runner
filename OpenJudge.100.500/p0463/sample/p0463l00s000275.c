#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=n%10;
    if(a==2||a==5||a==7||a==9||a==4)
    printf("hon");
    if(a==0||a==1||a==6||a==8)
    printf("pon");
    if(a==3)
    printf("bon");
}
