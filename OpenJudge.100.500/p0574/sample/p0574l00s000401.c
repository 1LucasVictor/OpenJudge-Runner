#include <stdio.h>

int main(){
  char num[4];
  if(scanf("%s",num)==1){}
  
  int i;
  int a=1;
  for(i=0;i<3;i++){

    if(num[i]==num[i+1]){
      printf("Bad");
      a=0;
      break;
    }
  }
  
  if(a==1)printf("Good");
  
  return 0;
}