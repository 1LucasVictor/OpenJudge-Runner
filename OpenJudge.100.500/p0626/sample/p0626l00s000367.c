#include <stdio.h>

int main(void){
  int kai,ban;
  scanf("%d %d",&kai,&ban);
  if(ban == 100){
    ban = 101;
  }
  for(int i = 0;i < kai;i++){
    ban = ban * 100;
  }
  printf("%d",ban);
  return 0;
}