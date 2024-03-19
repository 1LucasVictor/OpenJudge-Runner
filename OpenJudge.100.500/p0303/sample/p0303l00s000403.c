#include <stdio.h>

int P(int m,int k,int w[],int n);

int main(){
  int n,k,i,j,m,r,l,s=0,b,f;
  int w[100000];

  scanf("%d%d",&n,&k);

  for(i=0;i<n;i++){
    scanf("%d",&w[i]);
    s=w[i]+s;
  }

  l=0;
  r=s;
  while(r-l>1){
    m=(l+r)/2;
    f=P(m,k,w,n);
    if(f>=n)r=m;
    else l=m;
  }

  printf("%d\n",r);

  return 0;
}

int P(int m,int k,int w[],int n){
  int i=0,j;
  for(j=0;j<k;j++){
    int s=0;
    while(s+w[i]<=m){
      s=w[i]+s;
      i++;
      if(i==n) return n;
    }
  }
  return i;
}
    

  

