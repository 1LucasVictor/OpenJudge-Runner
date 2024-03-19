#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i,j,k;
    for(i=0; i<5; i++)
        scanf("%d",&a[i]);
    scanf("%d",&k);
    for(i=0; i<4; i++)
        for(j=i+1; j<5; j++)
            if(a[j]-a[i]>k)
            {
                printf(":(\n");
                goto loop;
            }
    printf("Yay!\n");
loop:
    ;
    return 0;
}
