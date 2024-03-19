#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    if(n==1*1 || n==2*2 || n==3*3 || n==4*4 ||n==5*5 ||n==6*6|| n==7*7||n==8*8||n==9*9)
    {
        printf("Yes");

    }
    else if (n==10||n==20||n==30||n==40)
        {
            printf("Yes");
        }
    else
    {
        printf("No\n");
    }
     return 0;
}