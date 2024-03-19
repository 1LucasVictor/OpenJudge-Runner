#include<stdio.h>
int main()
{
    int A,B,C,x;
    scanf("%d %d %d",&A,&B,&C);
    x=C-(A-B);
    if(x>0)
        printf("%d\n",x);
    else
        printf("0\n");
    return 0;
}
