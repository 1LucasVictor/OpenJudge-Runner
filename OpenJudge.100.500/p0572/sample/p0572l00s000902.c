    #include <stdio.h>
    #include <stdlib.h>
     
    int main(void){
      long l,r;
      int min = 2019;
      scanf("%ld",&l);
      scanf("%ld",&r);
      if((r - l) >= 2019){
	printf("%d",0);
	exit(0);
      }

      for(long i = l; i <= r; i++){
        for(long j = i + 1; j <= r; j++){
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