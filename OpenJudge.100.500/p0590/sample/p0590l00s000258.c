#include<stdio.h>

int main(void){
  int a[5];
  int k;
  int i, j;
  
  for(i = 0;i < 5;i++){
    scanf("%d", &a[i]);
  }
  scanf("%d", &k);
  
  for(i = 0;i < 4;i++){
    switch(i){
      case 0:
        for(j = 1;j < 5;j++){
          if(a[j] - a[i] > k){
            printf(":(\n");
            return 0;
          }
        }
        break;
      case 1:
        for(j = 2;j < 5;j++){
          if(a[j] - a[i] > k){
            printf(":(\n");
            return 0;
          }
        }
        break;
      case 2:
        for(j = 3;j < 5;j++){
          if(a[j] - a[i] > k){
            printf(":(\n");
            return 0;
          }
        }
        break;
      case 3:
        for(j = 4;j < 5;j++){
          if(a[j] - a[i] > k){
            printf(":(\n");
            return 0;
          }
        }
        break;
    }
  }
    printf("Yay!\n");
    return 0;
}
  
  