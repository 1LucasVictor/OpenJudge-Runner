#include <stdio.h>

int main(){
  int N,c=0;
  scanf("%d",&N);
  for(int i=1;i<=9;i++){
    if(N%i==0 && N/i<=9) c=1;
  }
  if(c) printf("Yes\n");
  else printf("No\n");
  return 0;
}