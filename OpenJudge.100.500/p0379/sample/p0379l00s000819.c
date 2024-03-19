#include<stdio.h>

int main(){
    int a[100][100];
    int b[100],c[100];
    int i,j;
    int n,m;
    scanf("%d%d\n",&n,&m);
   
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for (j=0;j<m;j++){
        scanf("%d",&b[j]);
    }
    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            c[i]+= a[i][j]*b[j];
        }
    }
    for(i=0;i<n;i++){
        printf("%d\n",c[i]);
    }



  return 0;

}
