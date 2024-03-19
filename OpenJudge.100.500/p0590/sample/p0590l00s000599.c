#include <stdio.h>

int main(){
  int densen[5];
  for(int i=0; i<5; i++){
    scanf("%d", &densen[i]);
  }
  int k;
  scanf("%d", &k);
  
  //全探索
  int hasConnection = 0; //0でAllOK、1で通信できない
  for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
      if((densen[i] - densen[j]) > k) hasConnection = 1;
    }
  }

  if(hasConnection == 1){
    printf(":(");
  }else{
    printf("Yay!");
  }
  
}