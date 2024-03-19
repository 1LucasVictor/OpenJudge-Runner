#include <stdio.h>

int main(void){
  int n, k=1;
  
  scanf("%d", &n);
  for(int i=1; i<10; i++){
    for(int j=1; j<10; j++){
      if(i*j==n){
        k=0;
        break;
      }
    }
  }
  if(k) printf("No\n");
  else printf("Yes\n");
  
  return 0;
}