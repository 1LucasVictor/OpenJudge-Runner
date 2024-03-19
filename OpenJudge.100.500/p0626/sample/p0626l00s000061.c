#include <stdio.h>
int main(){
  int d,n,k;
  scanf("%d %d",&d,&n);
  if(d==0){k=n;}
  else if(d==1){k=n*100;}
  else{k=n*10000;}
  printf("%d\n",k);
}