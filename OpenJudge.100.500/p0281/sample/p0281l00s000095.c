#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 110
#define INF 0x3f3f3f3f
int w[N][N];
int main(){


    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j) w[i][j] = 0;
            else w[i][j] = INF;
        }
    }

    for(int i = 0; i < n; i++){
        int k;
        int a;
        scanf("%d %d", &a, &k);
        for(int j = 0; j < k; j++){
            int c, d;
            scanf("%d %d", &c, &d);
            w[a][c] = d;
        }
    }

    int d[n];
    int used[n];
    int p[n];
    for(int i = 0; i < n; i++){
        d[i] = w[0][i];
        used[i] = 0;
        p[i] = i;
    }
    d[0] = 0;
    used[0] = 1;

    for(int num = 1; num < n; num++){
        int min = INF;
        int mini = 0;
        for(int i = 1; i < n; i++){
            if(used[i] == 0 && d[i] < min){
                min = d[i];
                mini = i;
            }
        }

        used[mini] = 1;
        for(int i = 1; i < n; i++){
            if(d[mini] + w[mini][i] < d[i]){
                d[i] = d[mini] + w[mini][i];
                p[i] = mini;
            }
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d %d\n", i, d[i]);
    }

    return 0;
}

