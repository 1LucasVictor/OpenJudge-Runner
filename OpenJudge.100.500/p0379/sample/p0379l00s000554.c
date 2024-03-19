#include <stdio.h>
int main(void){
        int n,m;
        int i,j;
        int vektor[100][100];
        int b[100],c[100]={};
        scanf("%d %d ",&n,&m);

        for(i=0;i<n;i++){
                for(j=0;j<m;j++)
                        scanf("%d",&vektor[i][j]);
        }
        for(i=0;i<m;i++)
                scanf("%d",&b[i]);
                
        for(i=0;i<n;i++){
            for(j=0;j<m;j++)
                c[i] += vektor[i][j]*b[j];
        }
        for(i=0;i<n;i++)
                printf("%d\n",c[i]);
                
        return 0;
}
