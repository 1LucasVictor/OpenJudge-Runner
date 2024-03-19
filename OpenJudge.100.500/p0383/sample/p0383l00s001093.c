#include <stdio.h>
#include <stdlib.h>
#define F(x,e) for(x=0;x<e;x++)
int main(){
  int i,j,k,n,m,l,*a,*b,*c;
  scanf("%d%d%d",&n,&m,&l);
  a=(int*)calloc(n*m,sizeof(int));
  b=(int*)calloc(m*l,sizeof(int));
  c=(int*)calloc(n*l,sizeof(int));
  F(i,n)F(j,m)scanf(" %d",&a[i*m+j]);
  F(i,m)F(j,l)scanf(" %d",&b[i*l+j]);
  F(i,n)F(j,l){F(k,m)c[i*l+j]+=a[i*m+k]*b[k*l+j];printf("%d%c",c[i*n+j],j==l-1?'\n':' ');}
  return 0;
}