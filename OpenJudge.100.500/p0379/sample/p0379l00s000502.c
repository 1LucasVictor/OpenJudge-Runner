#include <stdio.h>
 
int main()
{
    int matrix[100][100],i,j,input,n,m,matrix1[100],sum=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<m;i++){
        scanf("%d",&matrix1[i]);
    }
    for(i=0;i<n;i++){
        sum=0;
        for(j=0;j<m;j++){
            sum+=matrix[i][j]*matrix1[j];
        }
        printf("%d\n",sum);
    }
    return 0;
}
