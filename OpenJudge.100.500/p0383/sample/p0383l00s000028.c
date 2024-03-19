#include<stdio.h>
int main()
{
    int a,b,c;
    int i,j,k;
    scanf("%d%d%d", &a, &b, &c);
    int x[a][b], y[b][c];
    long long z;
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            scanf("%d", &x[i][j]);
        }
    }
    for(j=0;j<b;j++){
        for(k=0;k<c;k++){
            scanf("%d", &y[j][k]);
        }
    }
    for(i=0;i<a;i++){
        for(k=0;k<c;k++){
            z =0;
            for(j=0;j<b;j++){
                z += x[i][j] * y[j][k];
            }
            if (k == c - 1)printf("%ld\n", z);
            else printf("%ld ", z);
        }
    }
    return 0;
}