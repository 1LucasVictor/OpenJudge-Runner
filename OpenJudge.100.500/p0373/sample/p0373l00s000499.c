#include<stdio.h>

int main(void){
    int high, wide;
    int x, y;
    
    while(1){
      scanf("%d %d", &high, &wide);
      if (high == 0 && wide == 0)
          break;
      for(x = 0; x < high; x++){
        for(y = 0; y < wide; y++){
            if(y == 0 || y == wide -1 || x == 0 || x == high -1)
                printf("#");
            else
                printf(".");
        }
        printf("\n");
      }
        printf("\n");
    }
    return 0;
}
