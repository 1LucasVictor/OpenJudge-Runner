#include<stdio.h>
#include<stdlib.h>


int main(){
  int n,m,i,j,ans;
  int **A;
  int *b;
  scanf("%d%d",&n,&m);
  A=malloc(n*sizeof(int *));
  for(i=0;i<n;i++){
    A[i]=malloc(m*sizeof(int));}
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf("%d",&A[i][j]);}}
  b=malloc(m*sizeof(int));
  for(i=0;i<m;i++){
    scanf("%d",&b[i]);}
  for(i=0;i<n;i++){
    ans=0;
    for(j=0;j<m;j++){
      ans=ans+ (A[i][j])*(b[j]);}
    printf("%d\n",ans);}
  for(i=0;i<n;i++){
    free(A[i]);}
  free(A);
  return 0;}