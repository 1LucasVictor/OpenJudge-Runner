#include <stdio.h>

main(){
  int x,y,i,j;
  
  scanf("%d %d",&x,&y);
  
  for(i=x;i>0;i--){
    if(x%i == 0 && y%i == 0){
      printf("%d\n",i);
      return 0;
    }
  }
}