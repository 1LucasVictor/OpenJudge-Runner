#include <stdio.h>
#include <math.h>

int main(){
  int k, a, b;
  scanf("%d\n %d %d", &k, &a, &b);
  if(abs(a-b)>=k)printf("OK\n");
  else{
    for(int i=0; i<(1000+k)/k; i++){
      if(i*k>=a&&i*k<=b){
        printf("OK\n");
        return 0;
      }
      if(i*k>b)break;
    }
    printf("NG\n");
  }
}