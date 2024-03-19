#include<stdio.h>
int main()
{
    int A,B,C,res;
    while(scanf("%d %d %d",&A,&B,&C)!=EOF)
    {
        res=A-B;
        if(res>=C)
            printf("0\n");
        else
            printf("%d\n",C-res);
    }
    return 0;
}
