#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    double a[100][100], b[100][100], tmp=0;
    int n, m, l;
    int i, j,k;
    scanf("%d %d %d", &n, &m, &l);
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            scanf("%lf", &a[i][j]);
        }
    }
    for (i=0; i<m; i++) {
        for (j=0; j<l; j++) {
            scanf("%lf", &b[i][j]);
        }
    }
    for (i=0; i<n; i++) {
        for (j=0; j<l;j++) {
            for (k=0; k<m; k++) {
                tmp+=a[i][k]*b[k][j];
            }
            printf("%.0f", tmp);
            if (j!=l-1) {
                printf(" ");
            }
            tmp=0;
        }
        printf("\n");
    }
    
    
    return 0;
}

