#include<stdio.h>

int main(void){
  int comNum;
  int zyousi[200000];
  int bukaNum[200000];
  int i,j;
  
  if(scanf("%d",&comNum));
  for(i=0;i < (comNum-1);i++){
    if(scanf("%d ",&zyousi[i]));
  }
  
  for(i=0;i<comNum;i++){
    for(j=0;j<(comNum-1);j++){
    
      if(zyousi[j] == i){
        bukaNum[i] += 1;
      }
    }
  }
  
  for(i=1;i<=comNum;i++){
    printf("%d\n",bukaNum[i]);
  }
  

  
  return 0;
}

