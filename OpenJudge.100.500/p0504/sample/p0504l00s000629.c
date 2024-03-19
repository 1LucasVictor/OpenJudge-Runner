#include <stdio.h>

int main(void)
{
    int H,A,h;

    scanf("%d%d",&H,&A);

    h=H/A;
    if(H%A>=1) h=h+1;

    printf("%d",h);

    return 0;
}
