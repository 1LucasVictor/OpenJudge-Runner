#include <stdio.h>

int main(void){
        long long int num[3][100][100]={0};
        int n,m,l,i,j,k;
        scanf("%d %d %d",&n,&m,&l);
        for(i=0;i<n;i++){
                for(j=0;j<m;j++)
                        scanf("%d",&num[0][i][j]);
        }
        for(i=0;i<m;i++){
                for(j=0;j<l;j++)
                        scanf("%d",&num[1][i][j]);
        }
        for(i=0;i<n;i++){
                for(j=0;j<l;j++){
                        for(k=0;k<m;k++)
                                num[2][i][j]+=num[0][i][k]*num[1][k][j];
                }
        }
        for(i=0;i<n;i++){
                for(j=0;j<l;j++){
                        printf("%d",num[2][i][j]);
                        if(j!=(l-1))
                                putchar(' ');
                }
                putchar('\n');
        }
        return 0;
}