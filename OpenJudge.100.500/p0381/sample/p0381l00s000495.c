#include<stdio.h>
#include<stdlib.h>

int main(void){
  int i, j, k;
  int MaxNum = 0;
  int DesideNum = 0;
  int Count = 0;
  while(1){
    Count = 0;
    scanf("%d %d", &MaxNum, &DesideNum);
    if(MaxNum == 0, DesideNum == 0){break;}
    for(i = 1 ; i <= MaxNum ; ++i){
      for(j = 1 ; j <= MaxNum ; ++j){
        if(i != j){
          for(k = 1 ; k <= MaxNum ; ++k){
            if(k != i && k != j){
              if(i + j + k == DesideNum){
                Count += 1;
              }
            }
          }
        }
      }
    }
    printf("%d\n", Count/6);
  }
  return 0;
}

