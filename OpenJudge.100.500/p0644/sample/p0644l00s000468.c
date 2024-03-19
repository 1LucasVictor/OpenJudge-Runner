#include<stdio.h>

int main(void){
  int s[2];
  int count = 0;
  int i;
  scanf("%1d%1d%1d",&s[0],&s[1],&s[2]);
  for(i = 0; i <= 2; i++){
    if(s[i] == 1){
      count++;
    }
  }
  printf("%d",count);
  return 0;
}