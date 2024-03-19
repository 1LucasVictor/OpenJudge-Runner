#include <stdio.h>
int main(){
  int i,j,k,l;
  scanf("%d %d",&i,&j);
  if(i<j){
    k=i;
    i=j;
    j=k;
  }
  //ユークリッド互除法
  l=i%j;
  while(l!=0){
    i=j;
    j=l;
    l=i%j;
  }
  printf("%d\n",j);
  return 0;
}

