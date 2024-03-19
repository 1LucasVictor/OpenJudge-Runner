#include <stdio.h>
int main(void){
  int n;
  scanf("%d",&n);
  for(int i=1;i<10;i++){
    for(int j=1;j<10;j++){
      if(i*j==n){
        printf("Yes");
        return 0;
      }
    }
  }
  printf("No");
  return 0;
}