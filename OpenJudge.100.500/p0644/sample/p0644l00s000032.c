#include <stdio.h>

int main(){
  int N,c=0;
  scanf("%d",&N);
  for(int i=1;i<=3;i++){
    c+=N%10;
    N/=10;
  }
  printf("%d\n",c);
  return 0;
}