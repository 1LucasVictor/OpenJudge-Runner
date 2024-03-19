#include <stdio.h>

int main(){
  int x, y, z;
  scanf("%d%d", &x, &y);
  while(z!=0){
    z = x % y;
    if(z==0){
      printf("%d\n", y);
      break;
    }
    x = y;
    y = z;
  }
  return 0;
}

