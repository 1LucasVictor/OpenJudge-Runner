#include<stdio.h>
void vector(int[101][101],int[1][101],int,int);
void vector(int x[101][101],int y[1][101],int i,int j){
    int k,l,c;
    for(k=0;k<i;k++){
        c=0;
        for(l=0;l<j;l++){
            c+=x[k][l]*y[0][l];
        }
        printf("%d\n",c);
    }
    return;
}
int main(void){
    int n,m,i,j;
    int a[101][101],b[1][101];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<m;j++){
        scanf("%d",&b[0][j]);
    }
    vector(a,b,n,m);
    return 0;
}
