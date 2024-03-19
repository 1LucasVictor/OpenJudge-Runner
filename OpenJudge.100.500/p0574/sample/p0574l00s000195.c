#include <stdio.h>

int main(void){
  int s;
  scanf("%d",&s);
  int mod = 1000;
  int renflag = 0; //0 = false, 1 = true
  int typecount = 0;
  int nowtype;
  int s_search;
  for(int i=0; i<4; i++){
    s_search = s % mod;
    if(nowtype != s_search){
      nowtype = s_search;
      typecount++;
    }else{
      if(renflag == 1){
        renflag = 0;
      }else{
        renflag = 1;
      }
    }
    mod = mod / 10;
  }
  if(typecount == 2 && renflag == 1){
    printf("Good");
  }else{
    printf("Bad");
  }
  
}