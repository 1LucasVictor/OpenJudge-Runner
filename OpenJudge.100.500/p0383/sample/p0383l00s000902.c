#include<stdio.h>
int main(void)
{
   int A[100][100],B[100][100];
   long int C[100][100];
   int i,j,k,n,m,l;
   scanf("%d %d %d",&n,&m,&l);
   for(i=0;i<n;i++){
     for(j=0;j<m;j++){
       scanf("%d",&A[i][j]);
     }
   }
   for(j=0;j<m;j++){
     for(k=0;k<l;k++){
       scanf("%d",&B[j][k]);
     }
   }
   for(i=0;i<n;i++){
     for(k=0;k<l;k++){
       C[i][k]=0;
     }
   }
   for(i=0;i<n;i++){
     for(k=0;k<l;k++){
       for(j=0;j<m;j++){
         C[i][k]+=A[i][j]*B[j][k];
       }
     }
   }
   for(i=0;i<n;i++){
     for(k=0;k<l;k++){
       printf("%ld",C[i][k]);
       if(k!=l-1){
         printf(" ");
       }
       if(k==l-1){
         printf("\n");
       }
     }
   }
   return 0;
}