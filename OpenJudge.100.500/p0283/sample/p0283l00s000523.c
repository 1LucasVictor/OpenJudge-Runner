#include<stdio.h>
#include<string.h>
char str[10][10];
int t,flag,book[10][10][10];
void get(int a,int b,int n)
{
    int i,j,k;
    for(j=0;j<8;j++)
        book[n][j][b]=1;
    for(j=0;j<8;j++)
        book[n][a][j]=1;
    for(j=a,k=b;j<8&&k<8;j++,k++)
        book[n][j][k]=1;
    for(j=a,k=b;j<8&&k>=0;j++,k--)
        book[n][j][k]=1;
    for(j=a,k=b;j>=0&&k<8;j--,k++)
        book[n][j][k]=1;
    for(j=a,k=b;j>=0&&k>=0;j--,k--)
        book[n][j][k]=1;
    return;
}
void clen(int n)
{
    int i,j;
    for(i=0;i<8;i++)
        for(j=0;j<8;j++)
        book[n][i][j]=0;
}
void cpy(int x,int y)
{
    int i,j;
    for(i=0;i<8;i++)
        for(j=0;j<8;j++)
            book[x][i][j]=book[y][i][j];
}
void dfs(int x,int y,int n)
{
    int i,j,k;
    if(n==9-t)
    {
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
                printf("%c",str[i][j]);
            printf("\n");
        }
        flag=1;
        return;
    }
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            if(book[n-1][i][j]==0)
            {
                cpy(n,n-1);
                get(i,j,n);
                str[i][j]='Q';
                dfs(i,j,n+1);
                clen(n);
                str[i][j]='.';
            }
            if(flag)return;
        }
    }
}
int main()
{
    int n,m,a,b,i,j,k;
    scanf("%d",&t);
    memset(str,'.',sizeof(str));
    if(t==8)
    {
        for(i=0;i<t;i++)
        {
            scanf("%d%d",&a,&b);
            str[a][b]='Q';
        }
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
                printf("%c",str[i][j]);
            printf("\n");
        }
    }
    else
    {
        memset(book,0,sizeof(book));
        for(i=0;i<t;i++)
        {

            scanf("%d%d",&a,&b);
            str[a][b]='Q';
            get(a,b,0);
        }
        flag=0;
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                if(!book[0][i][j])
                {
                    cpy(1,0);
                    get(i,j,1);
                    str[i][j]='Q';
                    dfs(i,j,2);
                    clen(1);
                    str[i][j]='.';
                }
            }
        }
    }
}

