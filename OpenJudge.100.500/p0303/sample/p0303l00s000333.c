#include<stdio.h>
int main(){

  int i;
  int n,k;
  int P=0;
  
  scanf("%d%d",&n,&k);
  int N[n];
  for(i=0;i<n;i++){
    scanf("%d",&N[i]);
    P+=N[i];
  }
  P/=k;
  P++;
  printf("%d\n",P);
  return 0;
}

