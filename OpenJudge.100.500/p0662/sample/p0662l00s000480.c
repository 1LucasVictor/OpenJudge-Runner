#include<stdio.h>
int main(void)
{
    int A,B,C,D,x,y;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    if(A<=C) x=C;
    else x=A;
    if(B<=D) y=B;
    else y=D;
    if(B<=C||D<=A) printf("0");
    else printf("%d",y-x);
    return 0;
}