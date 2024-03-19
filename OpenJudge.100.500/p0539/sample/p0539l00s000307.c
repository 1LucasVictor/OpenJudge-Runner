#include<stdio.h>

int main(void){
  int n;
  int i;
  scanf("%d",&n);
  for(i=1;i<10;i++){
    if(n%i==0){
      if(n/i<10){
        printf("Yes");
        return 0;
      }
    }
  }
  printf("No");
  return 0;
}
