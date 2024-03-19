#include<stdio.h>
#include<string.h>

int main(){

  int k;
  int i = 0, j = 0;
  int x[100];

  for(i = 0;i < 5;i++){
    scanf("%d",&x[i]);
  }
  scanf("%d",&k);
  for(i = 0;i < 4;i++){
    for(j = i + 1;j < 5;j++){
      if(x[j] - x[i] > k){
        printf(":(");
        return 0;
      }
    }
  }
  printf("Yay!");
  return 0;
}