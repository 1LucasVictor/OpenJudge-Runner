#include <stdio.h>

int max(int a,int b){
  if (a>b)
    return a;
  else
    return b;
}

int main(){
  int i,n,x,maxsofar,maxend;
  scanf("%d",&n);
  while (n!=0){
    maxsofar=0;
    maxend=0;
    for (i=0;i<n;i++){
      scanf("%d",&x);
      maxend=max(maxend+x,0);
      maxsofar=max(maxsofar,maxend);
    }
    printf("%d\n",maxsofar);
    scanf("%d",&n);
  }
  return 0;
}