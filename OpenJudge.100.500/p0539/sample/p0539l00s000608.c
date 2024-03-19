#include<stdio.h>
int main()
{
    int h,i,j;
    scanf("%d",&h);
    for(i=9;i>=1;i--)
    {
        if(h%i==0)
        {
            j=h/i;
            if(j<=9)
            {
                printf("Yes");
            }
            else printf("No");
            break;
        }
    }
    return 0;
}
