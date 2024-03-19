#include<stdio.h>
int main()
{
    int H,A,x;
    scanf("%d%d",&H,&A);
    if(H%A==0)
        x=H/A;
    else
        x=H/A+1;
    printf("%d",x);
}
