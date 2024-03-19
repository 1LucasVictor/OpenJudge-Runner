#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);

    char mark,mark2ele['S'+1]={['S']=0,['H']=1,['C']=2,['D']=3},rank2ele[]={'S','H','C','D'};
    int  rank,card[52]={0};

    while(n--)
    {
        scanf(" %c %d",&mark,&rank);
        card[mark2ele[mark]*13+rank-1]=1;
    }

    int i;
    for(i=0;i<52;++i)
    {
        if(!card[i])
        {
            printf("%c %d\n",rank2ele[i/13],i%13+1);
        }
    }

    return 0;
}