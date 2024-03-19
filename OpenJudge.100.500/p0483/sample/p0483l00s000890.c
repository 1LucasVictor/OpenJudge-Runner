#include<stdio.h>
int main()
{
    int N,count=0;
    scanf("%d",&N);
    while(N>0)
    {
        int rem=N%10;
        if(rem == 7)
        {
            printf("Yes\n");
            count++;break;
        }
        N=N/10;
    }
    if(count==0)
        printf("No\n");
}
