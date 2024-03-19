#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,m,l,i,j,k;
    int **A,**B;
    double **C;

    scanf("%d %d %d",&n,&m,&l);
    if(n<1||m<1||l<1 || 100<n||100<m||100<l)
    return -1;

    A=(int*)malloc(sizeof(int*)*n);
    for(i=0;i<n;i++)
        A[i]=(int*)malloc(sizeof(int)*m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            A[i][j]=0;
    }


    B=(int*)malloc(sizeof(int*)*m);
    for(j=0;j<m;j++)
        B[j]=(int*)malloc(sizeof(int)*l);
    for(j=0;j<m;j++){
        for(k=0;k<l;k++)
            B[j][k]=0;
    }


    C=(double*)malloc(sizeof(double*)*n);
    for(i=0;i<n;i++)
        C[i]=(double*)malloc(sizeof(double)*l);
    for(i=0;i<n;i++){
        for(k=0;k<l;k++)
            C[i][k]=0;
    }


    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&A[i][j]);
            if(A[i][j]<0 ||10000<A[i][j]){
                return -1;
            }
        }
    }

    for(j=0;j<m;j++){
        for(k=0;k<l;k++){
            scanf("%d",&B[j][k]);
            if(B[j][k]<0 ||10000<B[j][k]){
                return -1;
            }
        }
    }


    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            for(k=0;k<l;k++)
                C[i][k]+=A[i][j]*B[j][k];
        }
    }

    for(i=0;i<n;i++){
        for(k=0;k<l;k++){
            printf("%.lf",C[i][k]);
            if(k!=l-1)printf(" ");
        }
        if(i!=n-1)printf("\n");
    }
    printf("\n");
    free(A);free(B);free(C);
 return 0;
}