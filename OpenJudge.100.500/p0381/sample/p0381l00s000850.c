#include <stdio.h>
int main(void){
  int n;
  int x;
  int count = 0;

  while(1){
    scanf("%d %d\n",&n,&x);
    if(n == 0 && x == 0){
      break;
    }
    for(int i=1; i<=n; i++){
      for(int j=1; j<=n; j++){
        for(int k=1; k<=n; k++){
          if(i<j && j<k && i+j+k == x){
            count++;
          }
        }
      }
    }

    printf("%d\n",count);
    count = 0;
  }

  return 0;
}
