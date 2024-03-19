#include <stdio.h>
#define MAX_L 8
#define NIL -1
#define FREE 0
#define NOT_FREE 1
int row[MAX_L];
int column[MAX_L];
int dpos[2*MAX_L-1];
int dneg[2*MAX_L-1];
int wholeGraph[MAX_L][MAX_L];
void printBoard()
{
    for(int i=0;i<MAX_L;i++)
    {
        for(int j=0;j<MAX_L;j++)
        {
            if(wholeGraph[i][j]==NOT_FREE && row[i]!=j)return;
        }
    }
    for(int i=0;i<MAX_L;i++)
    {
        for(int j=0;j<MAX_L;j++)
        {
            printf("%c", (row[i]==j) ? 'Q' : '.');
        }
        printf("\n");
    }
}
void putQueen(int i)
{
    if(i==MAX_L)
    {
        printBoard();
        return;
    }
    for(int j = 0;j<MAX_L;j++)
    {
        if(column[j]==NOT_FREE||dpos[i+j]==NOT_FREE||dneg[i-j+MAX_L-1]==NOT_FREE)
            continue;
        row[i]=j;
        column[j]=dpos[i+j]=dneg[i-j+MAX_L-1] = NOT_FREE;
        putQueen(i+1);
        column[j] = dpos[i+j] = dneg[i-j+MAX_L-1] = FREE;
    }
}
int main() {
    for(int i =0;i<MAX_L;i++)
    {
        column[i]=FREE;
        for(int j = 0;j<MAX_L;j++){wholeGraph[i][j]=FREE;}
    }
    for(int i = 0;i<2*MAX_L;i++)
    {
        dpos[i]=FREE;
        dneg[i]=FREE;
    }
    int n;
    int ro, co;
    scanf("%d", &n);
    for(int i = 0;i<n;i++){
        scanf("%d %d", &ro, &co);
        wholeGraph[ro][co] = NOT_FREE;
    }
    putQueen(0);
    return 0;
}

