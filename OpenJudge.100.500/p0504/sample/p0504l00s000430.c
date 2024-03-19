#include <stdio.h>

int main(void)
{
        int  H, A, s;

        scanf("%d%d",&H,&A);

        s = H / A;
        if (H%A>0)
                s = s + 1;

        printf("%d\n",s);

        return 0;
}
