#include<stdio.h>
int main()
{
    int A,B,C,sum;
    scanf("%d%d%d",&A,&B,&C);
    sum=A-B;
    if(sum<C){
        printf("%d\n",C-sum);
    }else
    {
        printf("0\n");

    }
    return 0;



}
