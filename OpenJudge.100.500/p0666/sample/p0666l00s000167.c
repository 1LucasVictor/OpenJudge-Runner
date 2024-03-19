#include<stdio.h>

int main()
{
    int A,B,x;
    scanf("%d%d%d",&x,&A,&B);
    if(1<=x && x<=1000000000 && 1<=A && A<=1000000000 && 1<=B && B<=1000000000)
    {
        if(B<=A) printf("delicious");
        else if (B>A+x) printf("dangerous");
        else printf("safe");
    }

return 0;
}