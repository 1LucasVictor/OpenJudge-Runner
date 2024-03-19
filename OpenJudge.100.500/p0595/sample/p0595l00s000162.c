#include <stdio.h>
int main(void)
{

    int a,b,k;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&k);

    int cnt=0;
    int num=1;

    while(num<100)
    {
        if(a%num==0 || b%num==0)
        {
            cnt++;
            if(cnt==k)
            {
                printf("%d",num);
            }
        }
        num++;
    }
    
    return 0;
}