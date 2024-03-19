#include <stdio.h>

int main(){
    int a[100][100];
    int b[100];
    int n, m;
    int i, j, d;
    int ans;
    
    scanf(" %d %d", &n, &m);
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf(" %d", &d);
            a[i][j] = d;
        }
    }
    
    for(j = 0; j < m; j++){
        scanf("%d", &d);
        b[j] = d;
    }
    
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            ans += (a[i][j] * b[j]);
        }
        printf("%d\n",ans);
        ans = 0;
    }
     return 0;
}