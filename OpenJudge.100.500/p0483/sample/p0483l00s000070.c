#include<stdio.h>
int main()
{
    int N,num,cnt=0;
    scanf("%d", &N);
    while(N!=0)
    {
        num=N%10;
        if(num==7)
        {
            cnt++;
            break;
        }
        N/=10;
    }
    if(cnt==0)
        printf("No\n");
    else
        printf("Yes\n");
    return 0;
}
