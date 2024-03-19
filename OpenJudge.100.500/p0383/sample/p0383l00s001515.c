#include <stdio.h>
int main(){
    int n,m,l;
    int i,j,k;
    scanf("%d%d%d",&n,&m,&l);
    int a[100][100]={};//a[n-1][m-1]
    int b[100][100]={};//b[m-1][l-1]
    long long c[100][100]={};//c[n-1][l-1]
    
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    
    for(i=0;i<m;i++)
        for(j=0;j<l;j++)
            scanf("%d",&b[i][j]);
    //c[n][l]  c[i][j]=a[i][k]*b[k][j] i (0~n-1) j (0~l-1) k(0~m-1)
    for(i=0;i<n;i++)
        for(j=0;j<l;j++)
            for(k=0;k<m;k++)
                c[i][j]+=a[i][k]*b[k][j];
    
    for(i=0;i<n;i++){
        printf("%ld",c[i][0]);
        for(j=1;j<l;j++)
            printf(" %ld",c[i][j]);
        printf("\n");
    }
}

