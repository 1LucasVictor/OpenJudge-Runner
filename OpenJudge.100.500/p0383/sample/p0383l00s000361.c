#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,m,l;
    scanf("%d %d %d",&n,&m,&l);
    
    int aMat[n][m];
    int bMat[m][l];
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&aMat[i][j]);
        }
    }

    for(j=0;j<m;j++){
        for(k=0;k<l;k++){
            scanf("%d",&bMat[j][k]);
        }
    }
    
    int cMat[100][100] = {0};
    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            for(k=0;k<m;k++){
                cMat[i][j] += aMat[i][k] * bMat[k][j];
            }
        }
    }
    
    for(i=0;i<n;i++){
        for(k=0;k<l;k++){
            printf("%d",cMat[i][k]);
            if(k==l-1){
                printf("\n");
            }
            else{
                printf(" ");
            }
        }
    }
    
    return 0;
}