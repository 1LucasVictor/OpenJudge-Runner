#include<stdio.h>

int main(){
 int i,j,k,n,m,l,A[100][100]={},B[100][100]={},C[100][100]={};
 scanf("%d %d %d", &n, &m, &l);
 for(i=0; i<n; i++){
  for(j=0; j<m; j++){
   scanf("%d", &A[i][j]);
  }
 }
 for(i=0; i<m; i++){
  for(j=0; j<l; j++){
   scanf("%d", &B[i][j]);
  }
 }
 for(i=0; i<n; i++){
  for(j=0; j<l; j++){
   for(k=0; k<m; k++){
    C[i][j]+=A[i][k]*B[k][j];
   }
  if(j!=l-1){printf("%d ",C[i][j]);}
  else{printf("%d\n", C[i][j]);}
  }
 }
 return 0;
}