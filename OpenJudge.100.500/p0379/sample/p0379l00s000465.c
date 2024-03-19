#include<stdio.h>
int main(void){
    int n,m,i,j,c=0;
    int a[100][100],b[100];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            c+=a[i][j]*b[j];
        }
        printf("%d\n",c);
        c=0;
    }
    return 0;
}
