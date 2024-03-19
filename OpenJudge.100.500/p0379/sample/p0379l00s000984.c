#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,m;
    
    int i,j;
    
    scanf("%d %d",&n,&m);
    
    int a[n][m];
    int b[m];
    int c[n];
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
//    for(i=0;i<n;i++){
//        for(j=0;j<m;j++){
//            printf("%d ",a[i][j]);
//        }
//        printf("\n");
//    }
//
    
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
//    for(i=0;i<m;i++){
//        printf("%d\n",b[i]);
//    }
    
    for(i=0;i<n;i++){
        c[i]=0;
        for(j=0;j<m;j++){
//            printf("%d=%d+%d*%d\n",c[i],c[i],a[i][j],b[j]);
            c[i]=c[i]+a[i][j]*b[j];
        }
    }
    
    for(i=0;i<n;i++){
        printf("%d\n",c[i]);
    }
    
    return 0;
}
