#include <stdio.h>

int main(){
  int a[5000],i,j,k,l,m,n,s;
  while(scanf("%d",&n)){
    if(n==0) break;
    m=0;
    scanf("%d",&a[0]);
    for(i=1;i<n;i++){
      scanf("%d",&a[i]);
      if(a[i]>0){
        for(j=0;j<=i;j++){
          s=0;
          for(k=j;k<=i;k++) s+=a[k];
          if(s>m) m=s;
        }
      }
    }
    printf("%d\n",m);
  }
  return 0;
}