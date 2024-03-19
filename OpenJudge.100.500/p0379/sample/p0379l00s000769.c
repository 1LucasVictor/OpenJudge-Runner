#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int nm[100][100] = {0}, m1[100] = {0},i,j,c=0,n,m;
    
    scanf("%d %d",&n,&m);
    
    for (i = 0; i < n ; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d",&nm[i][j]);
        }
    }
    
    for (i = 0; i < n ; i++) {
        scanf("%d",&m1[i]);
    }
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            c += nm[i][j] * m1[j];
        }
        printf("%d\n",c);
        c = 0;
    }
    return 0;

}