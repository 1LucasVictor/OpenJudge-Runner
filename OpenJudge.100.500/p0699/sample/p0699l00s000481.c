#include<stdio.h>
#include<stdlib.h>

int main(void){
  int *iroha = calloc(3, sizeof(int));
  scanf("%d%d%d",iroha,iroha+1,iroha+2);
  int count[2]={0,0};
  for(int i = 0; i < 3; i++){
    if( iroha[i] == 5 )count[0] += 1;
    else if( iroha[i] == 7)count[1] += 1;
  }
  
  if( count[0] == 2 && count[1] == 1)printf("YES\n");
  else printf("NO\n");
  free(iroha);
  return 0;
}