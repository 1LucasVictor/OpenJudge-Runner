#include <stdio.h>

int main(void)
{
        int i, H, A, s;

        scanf("%d%d",&H,&A);

        for (i=H;i>=0;i=i-A)
                s = s + 1;
        printf("%d\n",s);

        return 0;
}
