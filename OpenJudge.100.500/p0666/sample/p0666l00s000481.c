#include<stdio.h>

int main()
{
    int A,B,X;
    scanf("%d%d%d",&X,&A,&B);
    if(1<=X && X<=1000000000 && 1<=A && A<=1000000000 && 1<=B && B<=1000000000)
    {
        if(B<=A) printf("delicious");
        else if (B>A+X) printf("dangerous");
        else printf("safe");
    }

return 0;
}