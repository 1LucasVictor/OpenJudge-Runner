#include <stdio.h>

int main(){
  char a[100];
  int i;
  scanf("%s",a);
  for(i=0;i<3;i++){
    if(a[i]==a[i+1]){
      printf("Bad\n");
      return 0;
    }
  }
  printf("Good\n");
  return 0;
}