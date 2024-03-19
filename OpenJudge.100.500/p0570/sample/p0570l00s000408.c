#include<stdio.h>
int main()
{
    int A,B,K,y,z;
    scanf("%d%d",&A,&B);
    K=(A+B)/2;
    y=A-K;
    z=B-K;
    if(y<0)
        y=-y;
    if(z<0)
        z=-z;
    if(y==z)
        printf("%d\n",K);
    else
        printf("IMPOSSIBLE\n");
    return 0;
}