#include<stdio.h>
int main(){
    int n,k,l,F;
    int DOKOKARA[101];
    int NANKO[101];
    int j,i;
    int Toplace[101][101];
    int A[101][101];
    scanf("%d",&n);
    for(k=1;k<=n;k++){
        scanf("%d %d",&DOKOKARA[k],&NANKO[k]);
        for(l=1;l<=NANKO[k];l++){
            scanf("%d",&Toplace[k][l]);
        }
    }

    for(i = 1;i <= n;i++){
      for(j=1;j<=n;j++){
         A[i-1][j-1] = 0;
         }
    }

         for(i=1;i<=n;i++){
             for(j = 1;j<=n;j++){
                 for(k=1;k<=n;k++){
                     for(l=1;l<=NANKO[k];l++){
                         if(i == DOKOKARA[k] && j == Toplace[k][l])
                 A[i-1][j-1] = 1;
             }
         }
     }
}
     for(i=1;i<=n;i++){
             for(j = 1;j<=n;j++){
                 printf("%d",A[i-1][j-1]);
                 if(j != n) printf(" ");
             }
             printf("\n");
     }

return 0;
}

