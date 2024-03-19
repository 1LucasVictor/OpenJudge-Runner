#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=n%10;
    if(a==2||a==4||a==5||a==7||a==9)
        printf("hon\n");
    else if(a==0||a==1||a==6||a==8)
        printf("pon\n");
    else
        printf("bon\n");
   return 0;
}
