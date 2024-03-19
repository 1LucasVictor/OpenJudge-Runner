#include <stdio.h>

int main(void){
  int x, y, i, j, yo;
  
  scanf("%d %d", &x, &y);
  j = 0;
  
  for(i=0; i<=x; i++){
    yo = (x-i)*4 + i*2;
    if(y == yo){
      j = 1;
    }
  }
  
  if(j == 1){
    printf("Yes\n");
  }
  else{
    printf("No\n");
  }
  
  return 0;
}
