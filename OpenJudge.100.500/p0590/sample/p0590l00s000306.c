#include <stdio.h>

int main(void){
  int ante_dis[4] = {0,0,0,0,0};
  int i, count, max_dis;
  for(i = 0; i<=4; i++){
    scanf("%d\n",&ante_dis[i]);
  }
  
  scanf("%d\n", &max_dis);
  
  for(i = 0; i<=4; i++){
    for(count = 1; count<=4; count++){
      if(ante_dis[count] - ante_dis[i] >= max_dis){
        printf(":(");
        return 0;
      }
    }
  }
  printf("Yay!");
  return 0;
}
