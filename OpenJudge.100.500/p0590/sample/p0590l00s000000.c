#include <stdio.h>

int main(){
  int p[5];
  int k;
  int flag = 0;
  scanf("%d\n",&p[0]);
  scanf("%d\n",&p[1]);
  scanf("%d\n",&p[2]);
  scanf("%d\n",&p[3]);
  scanf("%d\n",&p[4]);
  scanf("%d\n",&k);

  for(int i = 0; i < 5; i ++){
    for(int j = 0; j < 5; j ++){
      if(p[i] - p[j] <= 0){
        break;
      }else{
        if(p[i] - p[j] > k){
          flag = 1;
        }
      }
    }
  }

  if(flag){
    printf(":(");
  }else{
    printf("Yay!");
  }
  return 0;
}
