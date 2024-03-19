#include <stdio.h>
int main()
{
    int X,A,B,c;
    scanf("%d %d %d",&X,&A,&B);
    c=A-B;
    c=fabs(c);
    if (c<=X)
    {
        if(B>A)
            printf("safe");
        else
            printf("delicious");
    }
    else
        printf("dangerous");

}
