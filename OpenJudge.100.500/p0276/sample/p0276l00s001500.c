/* 
 * File:   main.c
 * Author: s1252007
 *
 * Created on July 27, 2018, 12:10 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

/*
 * 
 */
int M[MAX][MAX];
int n, u, k, v;

void makeGraph(int size);

int main(int argc, char** argv) {
    scanf("%d", &n);
    
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) M[i][j] = 0;
    
    makeGraph(n);
    
    for (int j = 0; j < n; ++j)
    {
        for (int jx = 0; jx < n; ++jx)
        {
            if (jx) printf(" ");
            printf("%d", M[j][jx]);
        }
        printf("\n");
    }
    return (EXIT_SUCCESS);
}

void makeGraph(int size)
{
    for (int i = 0; i < size; ++i)
    {
        scanf("%d %d", &u, &k);
        u--;
        for (int ix = 0; ix < k; ++ix)
        {
            scanf("%d", &v);
            v--;
            M[u][v] = 1;
        }
    }
}


