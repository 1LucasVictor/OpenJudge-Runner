#include <stdio.h>

int main(){
    int n, m, a[100][100], b[100];
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
int ans=0;
        for (int j=1; j<=m; j++){
            ans += (a[i][j] * b[j]);
        }
printf("%d\n", ans);
    }
    return 0;
}
