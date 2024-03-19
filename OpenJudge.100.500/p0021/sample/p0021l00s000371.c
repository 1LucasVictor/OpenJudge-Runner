#include <stdio.h>

int main(){
  int a[5000],i,j,m,n,s;
  while(scanf("%d",&n)){
    if(n==0) break;
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    m=a[0];
    for(i=0;i<n;i++){
      s=0;
      for(j=i;j<n;j++){
        s+=a[j];
        if(s>m) m=s;
      }
    }
    printf("%d\n",m);
  }
  return 0;
}