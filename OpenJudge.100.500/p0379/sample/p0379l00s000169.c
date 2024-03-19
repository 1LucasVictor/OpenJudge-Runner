#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i,j,m,n,x;
    scanf("%d %d",&m,&n);
    int a[m][n],b[m],c=0;
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d ",&x);
            a[i][j] = x;
        }
    }
    
    for(i=0;i<m;i++){
        scanf("%d",&x);
        b[i]=x;
    }
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            c+=a[i][j] * b[j];
        }
        printf("%d\n",c);
        c=0;
    }
    
    return 0;
}