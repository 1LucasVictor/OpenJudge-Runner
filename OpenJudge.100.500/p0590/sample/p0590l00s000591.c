#include <stdio.h>

int max(int a,int b){
  if(a > b){
    return a;
  }
  return b;
}

int min(int a,int b){
  if(a < b){
    return a;
  }
  return b;
}

int main(void){
  int a,k;
  int maximam = -1,minimam = 200;

  for(int i = 0;i < 5;i++){
    scanf("%d",&a);
    maximam = max(maximam,a);
    minimam = min(minimam,a);
  }

  scanf("%d",&k);

  if(maximam-minimam <= k)
    printf("Yay!\n");
  else
    printf(":(\n");

  return 0;
}