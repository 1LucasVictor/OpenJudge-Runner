#include <stdio.h>
int main()
{
    int n,m,i,j;
    long c;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int b[m];
    for(i=0;i<m;i++){       
            scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++){
            c=0;
            for(j=0;j<m;j++){
                c+=a[i][j] * b[j];
            }
            printf("%ld\n",c);
            
        
    }
    return 0;
}
