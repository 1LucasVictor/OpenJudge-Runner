#include <stdio.h>

int main(){
  int a[5000],i,j,k,l,m,n,s;
  while(scanf("%d",&n)){
    if(n==0) break;
    m=0;
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++){
      for(j=i;j<n;j++){
        s=0;
        for(k=i;k<=j;k++) s+=a[k];
        if(s>m) m=s;
      }
    }
    printf("%d\n",m);
  }
  return 0;
}