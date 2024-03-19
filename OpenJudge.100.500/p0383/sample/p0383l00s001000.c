#include <stdio.h>
int main(){
  int i,j,k;
  int n,m,l;
 long  int A[100][100]={};
  long int B[100][100]={};
  long long int C[100][100]={};

  scanf("%d %d %d",&n,&m,&l);

  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf("%ld",&A[i][j]);
    }
  }
  
for(i=0;i<m;i++){
    for(j=0;j<l;j++){
      scanf("%ld",&B[i][j]);
     }
  }

 for(i=0;i<n;i++){
   for(j=0;j<l;j++){
     for(k=0;k<m;k++){
 C[i][j]+=A[i][k]*B[k][j];
     }
   }
 }

 for(i=0;i<n;i++){
   for(j=0;j<l;j++){
     if(j==l-1) printf("%lld",C[i][j]);
     else printf("%lld ",C[i][j]);
 
 }
   printf("\n");
}
  return 0;
}

