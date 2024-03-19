#include<stdio.h>
#include<string.h>
int h[10],l[10],x1[15],x2[15];
int s[10][10];
void print()
{
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
    {
        if(s[i][j]&&h[i]!=j)
            return ;
    }
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            printf("%c",h[i]==j?'Q':'.');
        }
        printf("\n");
    }
}
void dfs(int i)
{
    if(i==8)
    {
        print();
        return ;
    }
    for(int j=0;j<8;j++)
    {
        if(l[j]||x1[i+j]||x2[i-j+8])
            continue;
        h[i]=j;
        l[j]=x1[i+j]=x2[i-j+8]=1;
        dfs(i+1);
        h[i]=l[j]=x1[i+j]=x2[i-j+8]=0;
    }
}
int main()
{
    int t;
    while(~scanf("%d",&t))
    {
        memset(s,0,sizeof(s));
        memset(h,0,sizeof(h));
        memset(l,0,sizeof(l));
        memset(x1,0,sizeof(x1));
        memset(x2,0,sizeof(x2));
        int x,y;
        for(int i=1;i<=t;i++)
        {
            scanf("%d%d",&x,&y);
            s[x][y]=1;
        }
        dfs(0);
    }
}

