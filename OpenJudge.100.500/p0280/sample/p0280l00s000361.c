#include<stdio.h>
#include<limits.h>
int main() {
 
    int size; 
    scanf("%d", &size);
    int count = 0;
    int matrix[size+1][size+1];
    int color[size+1], d[size+1], p[size+1];
    int mincost;
 
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < size; i++) 
    {
        color[i] = 0;
        p[i] = -1;
        d[i] = INT_MAX;
    }
    d[0] = 0;
    
    int u;
    while (1) {
        mincost = INT_MAX;
        for (int i = 0; i < size; i++) {
            if (color[i] != 2 && d[i] < mincost) {
                mincost = d[i];
                u = i;
            }
        }
         
        if (mincost == INT_MAX)
            break;
        color[u] = 2;
        for (int v = 0; v < size; v++)
        {
            if (color[v] != 2 && matrix[u][v] < d[v]&& matrix[u][v] != -1)
            {
                p[v] = u;
                d[v] =  matrix[u][v];
                color[v] = 1;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        if (p[i] != -1)
            count += matrix[i][p[i]];
    }
    printf("%d\n", count);
    return 0;
}

