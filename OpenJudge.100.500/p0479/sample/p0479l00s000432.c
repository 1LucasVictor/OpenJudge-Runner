#include <stdio.h>

int main(void){
  int N,a[200000],b[200000];

  scanf("%d",&N);
  for(int i=2;i<=N;i++){
    scanf("%d",&a[i]);
  }
  for(int k=1;k<=N;k++){
    b[k]=0;
  }
  for(int k=1;k<=N;k++){
    b[a[k]]++;
  }
  for(int k=1;k<=N;k++){
    printf("%d\n",b[k]);
  }

  return 0;
  }