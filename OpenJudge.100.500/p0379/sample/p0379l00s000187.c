#include <stdio.h>

int main()
{

    int i, j, n, m;
    int a[100][100];
    int b[100];
    int c[100];

    scanf("%d %d", &n, &m);

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0;i<n;i++){
        scanf("%d", &b[i]);
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            c[i] += a[i][j] * b[j]; 
        }
    }

    for(i=0;i<n;i++){
       printf("%d\n", c[i]);
    }
    return 0;
}