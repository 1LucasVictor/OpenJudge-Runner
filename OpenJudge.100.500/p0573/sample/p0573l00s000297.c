#include <stdio.h>
#include <sysexits.h>
#include <math.h>

int main(void){
  int b,i,j;
  char S[4];
  int a[4];
  if(scanf("%s",&S)!=1){
   exit(0);
  }
  b=0;
  //printf("S=%s",S);
  for(i=0;i<3;i++){
    for(j=i+1;j<4;j++){
      if(S[i]==S[j]){
	b=b+1;
     }
    }
  }
  if(b==2){
  printf("Yes");
  }
  else{
    printf("No");
  }
  return 0;
}
