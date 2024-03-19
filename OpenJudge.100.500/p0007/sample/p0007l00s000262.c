#include<stdio.h>

int main(void){

  int n,count = 0;
  while(scanf("%d",&n)!= EOF){

    for(int i = 0; i <= 9;i++){
      for(int j = 0; j <= 9;j++){
        for(int k = 0; k <= 9;k++){
          for(int l = 0 ;l <= 9;l++){
            if(n == i+j+k+l){
              count++;
            }
          }
        }
      }
    }
    printf("%d\n",count);
    count = 0;
  }



  return 0;
}

