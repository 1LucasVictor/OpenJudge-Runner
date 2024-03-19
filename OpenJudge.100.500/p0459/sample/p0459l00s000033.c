#include <stdio.h>

int main(){
  int tsuru,kame;
  int x,y;
  
  scanf("%d %d",&x,&y);
  
  for(tsuru=0;tsuru<=x;tsuru++){
    for(kame=0;kame<=(x-tsuru);kame++){
      if((tsuru*2+kame*4)==y){
        printf("Yes");
        return 0;
      }
    }
  }
  printf("No");
}