#include <stdio.h>

int main(){
  int i,j,n,maxv,minv;
  int input[200000];

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&input[i]);
  }

  minv = input[0];
  for(i=1;i<n;i++){
    if( maxv<input[i]-minv ) maxv = input[i]-minv;
    else maxv = maxv;
    if( input[i]<minv ) minv = input[i];
    else minv = minv;
  }

  printf("%d\n",maxv);
  return 0;
}