#include <stdio.h>
 
int main(void){
  int kai,ban;
  scanf("%d",&kai);
  scanf("%d",&ban);
  for(int i = 0;i < kai;i++){
    ban = ban * 100;
  }
  printf("%d",ban);
  return 0;
}