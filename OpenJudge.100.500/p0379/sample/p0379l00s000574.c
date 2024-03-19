#include<stdio.h>

int main(void){
    int n,m,i,k;
    int a[100][100];
    int b[100];
    int c[100]={0};
    scanf("%d %d",&n,&m);
    
    for(i=0;i<n;i++){
        for(k=0;k<m;k++){
            scanf("%d",&a[i][k]);
        }
    }
    
    for(k=0;k<m;k++){
        scanf("%d",&b[k]);
    }
    
    for(i=0;i<n;i++){
        for(k=0;k<m;k++){
            c[i]+=a[i][k]*b[k];
        }
    }
    for(i=0;i<n;i++){
        printf("%d\n",c[i]);
    }
    return 0;
}