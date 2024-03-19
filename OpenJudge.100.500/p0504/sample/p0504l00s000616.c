#include<stdio.h>
int main()
{
    int H,A,n;
    scanf("%d %d",&H,&A);
    n=H/A;
    if(H%A!=0)
        n++;
    printf("%d",n);
    return 0;
}
