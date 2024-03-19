#include <stdio.h>
int main(){

  int car[100],num,i=0,in[100],countin=0,countout=0;

  while(scanf("%d",&num) != EOF){
    if(num != 0){
      in[countin] = num;
      countin++;
    }else{
      car[countout] = in[countin-1];
      countout++;
      if(countin != 0)countin--;
    }
  }


  for(i=0;i<countout;i++){
    printf("%d\n",car[i]);
  }

  return 0;

}