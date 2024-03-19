#include <stdio.h>

int main(){
  int X,Y,c=0;
  scanf("%d %d",&X,&Y);
  for(int i=2*X;i<=4*X;i+=2){
    if(Y==i) c=1;
  }
  if(c==1) printf("Yes\n");
  else printf("No\n");
  return 0;
}
