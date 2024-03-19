#include <stdio.h>

int main(void)
{
  int x,y;
  int d=1;
  int i;
  int min;
  
  scanf("%d%d",&x,&y);

  if(x < y){
    min = x;
  }else{
    min = y;
  }

  for(i=2; i<=min; i++){
    if(((x%i) == 0) && ((y%i) == 0 )){
      d = i;
    }
  }

  printf("%d\n",d);
  

  return(0);
}