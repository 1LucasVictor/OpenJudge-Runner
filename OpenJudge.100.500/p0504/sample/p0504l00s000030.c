#include<stdio.h>

int main(void)
{
        int H, A, i;

        scanf("%d%d",&H,&A);

        for(i=0;H>0;i++)
                H=H-A;
        printf("%d\n",i);

        return 0;
}
