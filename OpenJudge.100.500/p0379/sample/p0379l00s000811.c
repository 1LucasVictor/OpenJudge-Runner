#include<stdio.h>
int main(){
    int n, m, i, j;
    int a[105][105], b[105], res[105];
    scanf("%d %d",&n, &m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        scanf("%d", &b[i]);
    }
    for(i=0;i<n;i++){
        res[i] = 0;
        for(j=0;j<m;j++){
            res[i] += a[i][j] * b[j];
        }
    }
    for(i=0;i<n;i++){
        printf("%d\n", res[i]);
    }
return 0;
}

