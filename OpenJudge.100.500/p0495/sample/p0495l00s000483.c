#include <stdio.h>
int main(void){
  char *stn[3];
  scanf("%s",&stn);
  if(stn[0]=="A" && stn[1]=="A" && stn[2]=="A" ){
    printf("No");
  }
  else if(stn[0]=="B" && stn[1]=="B" && stn[2]=="B"){
    printf("No");
  }else{
    printf("Yes");
  }
  return 0;
}
