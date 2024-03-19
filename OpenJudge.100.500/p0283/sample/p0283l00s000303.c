#include <stdio.h>
#define N 8
#define NOT_FREE 0
#define FREE 1
int ro[N],co[N],dp[15],dn[15],A[N][N];
int i,j,n,r,c;

void printBoard()
{
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(A[i][j]&&ro[i]!=j)return;
        }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(ro[i]==j) printf("Q");
            else{printf(".");}
        }
        printf("\n");
    }
}


void putQueen(int i)
{
    int j;
    if(i==N)
    {
        printBoard();
        return;
    }
    
    for(j=0;j<N;j++)
    {
        if(co[j]==NOT_FREE||dp[i+j]==NOT_FREE||dn[i-j+N-1]==NOT_FREE) continue;
        ro[i]=j;
        co[j]=dp[i+j]=dn[i-j+N-1]=NOT_FREE;
        putQueen(i+1);
        co[j]=dp[i+j]=dn[i-j+N-1]=FREE;
    }
}



int main ()
{
    scanf("%d",&n);
    
    for(i=0;i<15;i++)
    {
        dp[i]=dn[i]=FREE;
    }
    
    for(i=0;i<N;i++)
    {
        co[i]=ro[i]=FREE;
        for(j=0;j<N;j++)
        {
            A[i][j]=0;
        }
    }
    
    
    
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&r,&c);
        A[r][c]=90;
    }
    putQueen(0);
    return 0;
}

