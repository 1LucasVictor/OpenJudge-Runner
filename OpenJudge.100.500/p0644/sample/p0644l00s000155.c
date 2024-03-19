#include <stdio.h>

int main(){
  int masu[3];
  scanf("%1d%1d%1d", &masu[0], &masu[1], &masu[2]);
  
  int count=0;
  for(int i=0; i<sizeof(masu)/sizeof(masu[0]); i++){
    if(masu[i] != 0){
      count++;
    }
  }
  printf("%d", count);
}