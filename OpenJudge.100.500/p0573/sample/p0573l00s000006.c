#include "stdio.h"

int main(){
  char a[5];
  scanf("%s", a);
  if((a[0] == a[1] && a[1] == a[2]) || (a[0] == a[1] && a[1] == a[3]) || (a[0] == a[2] && a[2] == a[3]) || (a[1] == a[2] && a[2] == a[3])){
    printf("No");
    return 0;
  }
  if(a[0] == a[1]){
    if(a[2] == a[3]){
      printf("Yes");
      return 0;
    }
  }
  if(a[0] == a[3]){
    if(a[1] == a[2]){
      printf("Yes");
      return 0;
    }
  }
  if(a[0] == a[2]){
    if(a[1] == a[3]){
      printf("Yes");
      return 0;
    }
  }
  printf("No");
  return 0;
 }
