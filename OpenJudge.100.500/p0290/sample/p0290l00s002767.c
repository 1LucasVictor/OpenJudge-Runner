#include<stdio.h>
#include<stdlib.h>

#define N 100000000
#define M 10000

int main(void)
{
  int i,j,k=0,n,l[M],p=0;
  scanf("%d",&n);
  if(n<1 || n>M)exit(0);
  for(i=0;i<n;i++){
    scanf("%d",&l[i]);
    if(l[i]<2 || l[i]>N)exit(0);
  }
  for(i=0;i<n;i++){
    for(j=2;j<=l[i];j++){
      if(l[i]%j==0){
	p++;
      }
    }
    if(p==1)k++;
    p=0;
  }
  printf("%d\n",k);

}