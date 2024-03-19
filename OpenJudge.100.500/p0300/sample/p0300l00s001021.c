#include <stdio.h>

int main(){
  int i,j;

  int n,q;
  int S[100000],T[50000];

  //input
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&S[i]);
  }
  scanf("%d",&q);
  for(i=0;i<q;i++){
    scanf("%d",&T[i]);
  }
  //find
  int l,r,m;
  int fnd=0;
  for(i=0;i<q;i++){
    l = 0;
    r = n-1;
    while(l<r){
      m = (l+r)/2;
      if(T[i]==S[m]){
        fnd++;
        break;
      }
      if(T[i]>S[m]){
        l = m + 1;
      }else{
        r = m;
      }
    }
  }
  printf("%d\n",fnd);



  return 0;
}

