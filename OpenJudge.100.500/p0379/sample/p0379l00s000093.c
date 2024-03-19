#include <stdio.h>

int main(){
    int M1[101][101];
    int M2[101];
    int M3[101];
    int n,m;

    scanf("%d%d", &n, &m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)scanf("%d", &M1[i][j]);
    }

    for(int i=0; i<m; i++)scanf("%d", &M2[i]);

    for(int i=0; i<n; i++){
        M3[i]=0;
        for(int j=0; j<m; j++)M3[i] += M1[i][j] * M2[j];
    }

    for(int i=0; i<n; i++)printf("%d\n", M3[i]);

    return 0;

}
