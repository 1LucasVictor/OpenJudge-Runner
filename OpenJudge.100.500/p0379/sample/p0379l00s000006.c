#include <stdio.h>

int main(){
  
  int n,m,l,s,A[100][100],c[100],a,i,j;
  a=0;
scanf("%d%d",&n,&m);
for(i=0;i<n;i++){
  for(j=0;j<m;j++){
    scanf("%d",&l);
    A[i][j]=l;
  }
 }
for(j=0;j<m;j++){
  scanf("%d",&s);
  c[j]=s;
 }
for(i=0;i<n;i++){
  for(j=0;j<m;j++){
    a += A[i][j]*c[j];
  }
  printf("%d\n",a);
  a=0;
 }
return 0;
}