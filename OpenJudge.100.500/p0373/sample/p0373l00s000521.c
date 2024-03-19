#include<stdio.h>
int main()
{
    int w,h,i,j;
    while(1)
    {
        scanf("%d%d",&h,&w);
        if(w==0&&h==0)
        {
            break;
        }
        for(i=0;i<w;i++)
        {
            printf("#");
        }
        printf("\n");
        for(i=0;i<h-2;i++)
        {
            printf("#");
            for(j=0;j<w-2;j++)
            {
                printf(".");
            }
            printf("#\n");
        }
        for(i=0;i<w;i++)
        {
            printf("#");
        }
        printf("\n\n");
    }
    return 0;
}