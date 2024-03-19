#include<stdio.h>

int main()
{
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    if((1<=A)&&(A<=10)&&(1<=B)&&(B<=10)&&(1<=C)&&(C<=10))
{
    if(A==5&&B==5&&C==7)
    {
     printf("YES");
    }
    else if(A==5&&B==7&&C==5)
    {
     printf("YES");
    }
    else if(A==7&&B==5&&C==5)
    {
    printf("YES");
    }
    else
    {
    printf("NO");
    }
    }
    return 0;
}
   