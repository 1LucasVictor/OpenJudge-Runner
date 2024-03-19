#include<stdio.h>
int main(void){
    int n,m,i,j,a,b;
    int A[100][100];
    int B[100]={0};
    int C[100]={0};

    for(i=0;i<100;i++){
        for(j=0;j<100;j++){
            A[i][j]=0;
        }
    }
    scanf("%d %d",&n,&m);
    for(j=0;j<n;j++){
        for(i=0;i<m;i++){
            scanf("%d",&a);
            A[j][i]=a;
        }
    }
    for(j=0;j<m;j++){
        scanf("%d",&b);
        B[j]=b;
    }
    for(j=0;j<n;j++){
        for(i=0;i<m;i++){
            C[j]=C[j]+A[j][i]*B[i];
        }
    }
    for(i=0;i<n;i++){
        printf("%d\n",C[i]);
    }
    return 0;
}
