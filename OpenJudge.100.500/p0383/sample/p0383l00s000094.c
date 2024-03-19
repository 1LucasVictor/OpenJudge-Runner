#include<stdio.h>
#include<stdlib.h>
int main(void){
    int **a;
    int **b;
    int **c;
    int n,m,l,i,j,k;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&l);
    a = (int **)malloc(n * sizeof(int *));
    b = (int **)malloc(m * sizeof(int *));
    c = (int **)malloc(n * sizeof(int *));
    for(i=0;i<n;i++){
        a[i] = (int *)malloc(m * sizeof(int));
        c[i] = (int *)malloc(sizeof(int) * l);
    }
    for(i=0;i<m;i++){
        b[i] = (int *)malloc(sizeof(int) * l);
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<l;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            c[i][j] = 0;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
                for(k =0;k<m;k++){
                 c[i][j] += (a[i][k] * b[k][j]);
                }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            if(j < l -1) printf("%d ",c[i][j]);
            else printf("%d\n",c[i][j]);
        }
    }

    free(a);
    free(b);
    free(c);
    return 0;
}