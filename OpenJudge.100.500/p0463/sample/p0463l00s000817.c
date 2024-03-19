#include<stdio.h>
int main()
{
    int sei;
    int p;

    scanf("%d",&sei);


p=sei%10;

if(p==2||p==4||p==5||p==7||p==9)
//if(sei==2||sei==4||sei==5||sei==7||sei==9)
{
    printf("hon\n");
}

else if(p==0||p==1||p==6||p==8)
//if else(sei==0||sei==1||sei==6||sei==8)
{
    printf("pon\n");
}
else
{
    printf("bon\n");
}
    return 0;
}