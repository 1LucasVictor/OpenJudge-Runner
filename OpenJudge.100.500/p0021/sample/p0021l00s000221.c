#include <stdio.h>

int max(int a,int b){
  if (a>b)
    return a;
  else
    return b;
}

int main(){
  int i,n,x,maxsofar,maxend;
  int min=-100001;
  while (scanf("%d",&n)){
    if (n==0)
      break;
    maxsofar=0;
    maxend=0;
    for (i=0;i<n;i++){
      scanf("%d",&x);
      if ((x>min))
        min=x;
      maxend=max(maxend+x,0);
      maxsofar=max(maxsofar,maxend);
    }
    if (min<0)
      printf("%d\n",min);
    else
      printf("%d\n",maxsofar);
  }
  return 0;
}