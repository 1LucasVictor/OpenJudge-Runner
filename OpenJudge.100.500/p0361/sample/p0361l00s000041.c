#include <stdio.h>

int main(){
  int S,h=0,m=0,s=0;
  scanf("%d",&S);
  while(S>=3600){
    h+=1;
    S-=3600;
  }
  while(S>=60){
    m+=1;
    S-=60;
  }
  s=S;
  printf("%d:%d:%d\n",h,m,s);

  return 0;
}