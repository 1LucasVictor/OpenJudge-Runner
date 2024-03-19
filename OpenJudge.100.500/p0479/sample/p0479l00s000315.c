#include<stdio.h>

int main(void){
  int comNum;
  int zyousi[200001];
  int bukaNum[200001]={0};
  int i;
  
  if(scanf("%d",&comNum));
  
  for(i=2;i <= comNum;i++){
    if(scanf("%d ",&zyousi[i]));
    bukaNum[zyousi[i]] += 1;
  }

  
  for(i=1;i<=comNum;i++){
    printf("%d\n",bukaNum[i]);
  }
 
  return 0;
}