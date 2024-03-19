#include <stdio.h>
 
int main()
{
    int a[100][100],i,j,n,m,a1[100],sum=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        scanf("%d",&a1[i]);
    }
    for(i=0;i<n;i++){
        sum=0;
        for(j=0;j<m;j++){
            sum+=a[i][j]*a1[j];
        }
        printf("%d\n",sum);
    }
    return 0;
}
