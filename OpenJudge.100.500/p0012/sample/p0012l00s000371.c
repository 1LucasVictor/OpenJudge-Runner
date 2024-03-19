#include<stdio.h>

int main(){
  int trainNum, trainStock[100], trainCout=0;
  while(scanf("%d", &trainNum) != EOF){
    if(trainNum != 0){
      trainStock[trainCout] = trainNum;
      trainCout += 1;
    }else{
      printf("%d\n", trainStock[trainCout-1]);
      trainStock[trainCout-1] = 0;
      trainCout -= 1;
    }
  }
  return 0;
}