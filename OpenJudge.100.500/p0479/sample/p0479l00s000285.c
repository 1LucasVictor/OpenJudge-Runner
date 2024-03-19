#include<stdio.h>
int main(void)
{
    int N;
    int num[200005];
    int count[200005];
    scanf("%d",&N);
    num[0] = 0;
    count[0] = 0;
    for(int i=1;i<N;i++)
    {
        scanf("%d",&num[i]);
        count[i]=0;
    }
    for(int i=0;i<N;i++)
    {
        for(int j=(i+1);j<N;j++)
        {
            if((i+1)==num[j])
            {
                count[i]++;
            }
        }
    }
    for(int i=0;i<N;i++)
    {
        printf("%d\n",count[i]);
    }

}