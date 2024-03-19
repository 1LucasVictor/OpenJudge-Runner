#include<stdio.h>
 main(void)
{
    int n,m;
    scanf("%d %d",&n,&m);
     
    int a[n][m];
    int b[m];
    long c[n];
     
    int i,j;
     
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf(" %d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        scanf(" %d",&b[i]);
    }
     
    for(i=0;i<n;i++){
        c[i] = 0;
        for(j=0;j<m;j++){
            c[i] += a[i][j]*b[j];
        }
        printf("%d\n",c[i]);
    }
    return 0;
}

