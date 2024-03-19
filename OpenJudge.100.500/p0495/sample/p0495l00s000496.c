#include <stdio.h>
int main(){
  char x,y,z;
  scanf("%c%c%c",&x,&y,&z);
  if((x == y) && (x == z) && (y == z)){
    printf("No");
  }else{
    printf("Yes");
  }
}
