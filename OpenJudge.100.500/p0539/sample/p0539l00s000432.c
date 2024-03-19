#include "stdio.h"

int main(){
  int x,c=0;
  scanf("%d",&x);
  for(int i=1;i<=9;i++){
    for(int j=1;j<=9;j++){
      if(i*j==x)c=1;
    }
  }
  if(c==1)printf("Yes");
  if(c==0)printf("No");
  return 0;
}