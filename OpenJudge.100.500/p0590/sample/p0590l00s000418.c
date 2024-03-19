#include <stdio.h>
int main(void){
  int a,b,c,d,e,k;
  if(scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&k)<6) return 1;
  if(e-a>k){
    printf(":(\n");
  }
  else{
    printf("Yay!\n");
  }
    return 0;
}