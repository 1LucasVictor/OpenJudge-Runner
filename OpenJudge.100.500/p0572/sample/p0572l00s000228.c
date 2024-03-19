    #include <stdio.h>
    #include <stdlib.h>
     
    int main(void){
      long l,r;
      int min = 2019;
      scanf("%ld",&l);
      scanf("%ld",&r);
      for(int i = l; i <= r; i++){
        for(int j = i + 1; j <= r; j++){
          if((i * j) % 2019 < min){
            min = (i * j) % 2019;
            if(min == 0){
    			printf("%d",min);
                exit(0);
            }
          }
        }
      }
      printf("%d",min);
    }