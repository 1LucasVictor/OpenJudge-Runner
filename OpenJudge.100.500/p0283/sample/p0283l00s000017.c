#include<stdio.h>
#include<string.h>
#define N 8
#define FREE -1//不受攻击
#define NOT_FREE 1//受到攻击

int row[N],col[N],dpos[2*N-1],dneg[2*N-1];//行、列、斜向左下、斜向右下
int X[N][N];

void printBoard()
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if (X[i][j]==1)
            {
                if(row[i]!=j)
                    return;
            }
        }
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(row[i]==j)
                printf("Q");
            else
                printf(".");
        }
        printf("\n");
    }
}

void recursive(int i)
{
    if(i==N)                   //成功放置皇后
    {
        printBoard();
        return;
    }
    for(int j=0; j<N; j++)               //如果(i,j)受到其他皇后攻击，则忽略该格子
    {
        if(NOT_FREE==col[j]||NOT_FREE==dpos[i+j]||NOT_FREE==dneg[N+i-j-1])  //斜向左下，横纵坐标关系是：横纵坐标和相等；
            continue;                                                       //斜向右下，横纵坐标关系是：横纵坐标N+i-j-1
        //在(i,j)放置后
        row[i]=j;
        col[j]=dpos[i+j]=dneg[N+i-j-1]=NOT_FREE;
        //尝试下一行
        recursive(i+1);
        //(i,j)拿掉摆放在(i,j)的皇后
        row[i]=col[j]=dpos[i+j]=dneg[N+i-j-1]=FREE;
    }
    //皇后放置失败
}

int main()
{
    memset(X,0,sizeof X);
    memset(row,0,sizeof row);
    memset(col,0,sizeof col);
    memset(dpos,0,sizeof dpos);
    memset(dneg,0,sizeof dneg);
    int k,r,c;
    scanf("%d",&k);;
    for(int i=0; i<k; i++)
    {
        scanf("%d%d",&r,&c);
        X[r][c]=1;
    }
    recursive(0);
    return 0;
}

