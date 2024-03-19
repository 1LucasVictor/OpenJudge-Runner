#include <stdio.h>
int main(){
  int x,y,i;
  scanf("%d %d",&x,&y);
  if(x>y)i=y;
  else i=x;
  for(;i>1;i--){
    if(x%i==0 && y%i==0){
      printf("%d\n",i);
      break;
    }
  }
  return 0;
}

