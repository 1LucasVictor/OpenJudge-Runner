#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);
    int flag = 0;
    for(int i = 1;i<=9;i++)
    {
        for(int j = 1;j<=9;j++)
        {
            if(i * j == tc)
            {
                flag = 1;    
                break;
            } 
        }
        if(flag == 1) break;
    }
    if(flag == 1) printf("Yes\n");
    else{
        printf("No\n");
    }
}