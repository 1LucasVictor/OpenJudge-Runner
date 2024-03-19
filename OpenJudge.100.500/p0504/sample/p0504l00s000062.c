#include <stdio.h>
#include<stdlib.h>
#include <sysexits.h>
#include <math.h>

int main(void){
  int H,A,ans;
  if(scanf("%d %d",&H,&A)>2){
    printf("error");
   exit(0);
  }
  ans=H/A;
  if(H%A>0.5)ans++;
  printf("%d",ans);
  return 0;
}
