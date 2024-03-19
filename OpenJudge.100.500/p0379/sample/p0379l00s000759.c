#include <stdio.h>

int main(){
    int n, m, a[100][100], b[100], c[100];
    scanf("%d %d", &n, &m);
    
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for (int i=1; i<=m; i++){
        scanf("%d", &b[i]);
    }
    
    for (int i=1; i<=n; i++){
c[i]=0;
        for (int j=1; j<=m; j++){
            c[i] += (a[i][j] * b[j]);
        }
    }

    for (int j=1; j<=n; j++){
      printf("%d\n", c[j]);
    }
    return 0;
}
