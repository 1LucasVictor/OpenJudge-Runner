#include <stdio.h>
int main (int argc, char * argv[])
{
    int n,m,a1,b1;
    int a[100][100];
    int b[100];
    int c[100];
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<1;j++){
        scanf("%d",&b[i]);
        }
        
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            c[i] += a[i][j]*b[j];
        }
        printf("%d\n",c[i]);
    }
    return 0;
}

