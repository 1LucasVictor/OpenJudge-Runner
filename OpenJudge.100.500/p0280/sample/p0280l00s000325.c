#include <stdio.h>
#define INFI 2001
#define MAX_L 101
#define NIL -1
int Graph[MAX_L][MAX_L];
int mstUsed[MAX_L];
int parent[MAX_L];
int dCost[MAX_L];
int minVal;
int main(){
    int n;
    int e;
    int temp;
    int sum = 0;
    scanf("%d", &n);
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            scanf("%d", &e);
            Graph[i][j] = (e==-1)?INFI:e;
        }
    }
    for(int i = 0;i<n;i++){dCost[i]=INFI;parent[i]=NIL;mstUsed[i]=0;}
    dCost[0]=0;
    while(1)
    {
        minVal = INFI;
        temp = NIL;
        for(int i = 0;i<n;i++)
        {
            if(minVal>dCost[i]&&!mstUsed[i])
            {
                temp = i;
                minVal = dCost[i];
            }
        }
        if(temp == -1)break;
        mstUsed[temp] = 1;
        for(int v = 0;v<n;v++)
        {
            if(!mstUsed[v]&&Graph[temp][v]!=INFI)
            {
                if(dCost[v]>Graph[temp][v])
                {
                    dCost[v] = Graph[temp][v];
                    parent[v] = temp;
                }
            }
        }
    }
    for(int i=0;i<n;i++){sum += dCost[i];}
    printf("%d\n", sum);
    return 0;
}

