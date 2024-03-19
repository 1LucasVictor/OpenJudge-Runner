#include <stdio.h>

int main(){
  int X,Y;
  scanf("%d",&X);
  scanf("%d",&Y);
  for (int i=0; i<=X; i++){
    if (i*2 + (X-i)*4 == Y){
      printf("Yes");
      return 0;
    } 
  }
  printf("No");
  return 0;
}