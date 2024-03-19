#include <stdio.h>
#include <sysexits.h>
#include <math.h>
int main(void){
  int b,i,S;
  int a[4];
  if(scanf("%d",&S)!=1){
exit(1);
}
  b=0;
  for(i=0;i<4;i++){
    a[i]=S%10;
    S=S/10;
  }
  for(i=0;i<3;i++){
    if(a[i]==a[i+1]){
      b=1;
      break;
    }
  }
  if(b==1){
  printf("Bad");
  }
  else{
    printf("Good");
  }
  return 0;
}