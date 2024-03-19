#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,m,l,i,j,k;
    int **A,**B,**C;

    scanf("%d %d %d",&n,&m,&l);


    A=(int*)malloc(sizeof(int*)*n);
    for(i=0;i<n;i++)
        A[i]=(int*)malloc(sizeof(int)*m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            A[i][j]=0;
    }


    B=(int*)malloc(sizeof(int*)*m);
    for(i=0;i<m;i++)
        B[i]=(int*)malloc(sizeof(int)*l);
    for(i=0;i<m;i++){
        for(j=0;j<l;j++)
            B[i][j]=0;
    }


    C=(int*)malloc(sizeof(int*)*n);
    for(i=0;i<n;i++)
        C[i]=(int*)malloc(sizeof(int)*l);
    for(i=0;i<l;i++){
        for(j=0;j<m;j++)
            C[i][j]=0;
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            scanf("%d",&A[i][j]);
    }

    for(i=0;i<m;i++){
        for(j=0;j<l;j++)
            scanf("%d",&B[i][j]);
    }


    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            for(k=0;k<l;k++)
                C[i][k]+=A[i][j]*B[j][k];
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            printf("%d",C[i][j]);
            if(j!=m)printf(" ");
        }
        if(i!=n)printf("\n");
    }
    free(A);free(B);free(C);
 return 0;
}