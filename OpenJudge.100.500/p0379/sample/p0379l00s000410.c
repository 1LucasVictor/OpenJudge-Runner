#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[100][100]={0},b[100]={0};
    int n,m,count=0;
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            count += a[i][j]*b[j];
        }
        printf("%d\n",count);
        count = 0;
    }
    
    return 0;
}