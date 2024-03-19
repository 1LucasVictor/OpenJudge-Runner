#include <stdio.h>

int main(void){
    int i,j,k,n,m,l,a[100][100],b[100][100];
    long C;
    scanf("%d%d%d",&n,&m,&l);
    
    //??????A
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    
    //??????B
    for(i=0;i<m;i++)
        for(j=0;j<l;j++)
            scanf("%d",&b[i][j]);
    
    //??????C
    for(i=0;i<n;i++)
        for(j=0;j<l;j++){
            C = 0;
            for(k=0;k<m;k++)
                C += a[i][k] * b[k][j] ;
            printf("%ld", C);
            if(j+1 == l)
                printf("\n");
            else
                printf(" ");
        }
    
    return 0;
}