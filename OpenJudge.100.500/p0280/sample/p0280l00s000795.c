/* 
 * File:   main.c
 * Author: s1252007
 *
 * Created on July 30, 2018, 8:22 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define INF 100000000
#define NIL -1

/*
 * 
 */

int M[MAX][MAX], d[MAX], pi[MAX], color[MAX];
int n, u, r, mincost;
int sum = 0;

int prim(int r);

int main(int argc, char** argv) {
    int temp;
    scanf("%d", &n);
    
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
        {
            scanf("%d", &temp);
            if (temp == NIL) M[i][j] = INF;
            else M[i][j] = temp;
        }
    
    
    printf("%d\n", prim(0));

    return (EXIT_SUCCESS);
}

int prim(int r)
{
    for (int i = 0; i < n; ++i)
    {
        d[i] = INF;
        pi[i] = NIL;
        color[i] = WHITE;
    }
    
    d[r] = 0;
    
    while (1)
    {
        mincost = INF;
        for (int i = 0; i < n; ++i)
        {
            if (color[i] != BLACK && d[i] < mincost)
            {
                mincost = d[i];
                u = i;
            }
        }
        
        if (mincost == INF) break;
        color[u] = BLACK;
        
        for (int v = 0; v < n; ++v)
        {
            if (color[v] != BLACK && M[u][v] != INF)
            {
                if (M[u][v] < d[v])
                {
                    pi[v] = u;
                    d[v] = M[u][v];
                    color[v] = GRAY;
                }
            }
        }
    }
    
    for (int ix = 0; ix < n; ++ix) if (pi[ix] != NIL) sum += M[ix][pi[ix]];
    
    return sum;
}



